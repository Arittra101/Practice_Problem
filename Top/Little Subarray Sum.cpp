

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
    lli n,a,b,sum=0;
    vi v;
    cin>>n>>a>>b;
    for(i=0;i<n;i++)
    {
        lli x;
        cin>>x;
        v.pb(x);
    }
    for(i=a;i<=b;i++)
    {
        sum+=v[i];
    }
    cout<<sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
