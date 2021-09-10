

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli i,j;

#define pii  pair<lli, lli>
#define vi vector<lli>
#define pb push_back
#define mp make_pair
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define SORT(v) sort(v.begin(),v.end());
#define R_SORT(v) sort(v.begin(),v.end(),greater<lli>());
#define en "\n"


void solve(vector<int>& v, int start, int destination)
{

    map<int,int>m;
    vector<int>v1(3,0);
    for(i=0;i<v.size();i++)
    {
        m[v[i]]++;
    }

    v1[1]=12;
    cout<<v1[1];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int>v{1,2,3,4};
    solve(v,0,1);
    return 0;
}


