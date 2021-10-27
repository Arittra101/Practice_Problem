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


void solve(vector<int>& a)
{
    int sum=0;
    int temp=INT_MIN;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]==1)
        {
            sum++;
           // cout<<"f";
        }

         if(a[i]==0 ||i == a.size()-1)
        {
            cout<<sum<<endl;
            temp = max(temp,sum);
            sum=0;
        }
    }
 cout<<temp;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int>v{1,1,0,1,1,1};
    solve(v);
    return 0;
}


