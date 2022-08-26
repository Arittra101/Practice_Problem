
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
    lli n,mn=INT_MAX,mx=INT_MIN;
    cin>>n;
    vi v;
    while(n--)
    {
        lli x;
        cin>>x;
        mn =min(mn,x);
        mx = max(mx,x);
    }
    cout<<abs(mn-mx)<<endl;
}
solve1()
{
    lli a,b,c;
    cin>>a>>b>>c;
    lli sm = a+b+c;
    if(sm%3==0)cout<<0<<endl;
    else cout<<1<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli t;
    cin>>t;
    while(t--)
    {
       solve1();
    }

    return 0;
}
