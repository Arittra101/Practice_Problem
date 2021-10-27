v
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


void solve()
{
    vector<int>v{9,3,3,3,3,3,7,5,3};
    lli cnt=2;
    lli pbd = v[1]-v[0];
    lli mx = cnt;
    for(i=2;i<v.size();i++)
    {
        if(v[i]-v[i-1]==pbd)
        {
           // pbd =  v[i]-v[i-1];
            cnt++;
        }
        else
        {
            mx = max(mx,cnt);
            pbd = v[i]-v[i-1];
            cnt=2;

        }
    }
    cout<<mx;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}


