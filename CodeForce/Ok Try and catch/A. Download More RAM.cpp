
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
    // lli n,sm=0,sm1=0;
    // cin>>n;
    // vi v(n);
    // for(auto &i : v) cin>>i;
    lli n,k,sm=0;
    cin>>n>>k;

    vector<pair<lli,lli>>vp;
    for(i=0;i<n;i++)
    {
        lli x;
        cin>>x;
        vp.pb({x,0});
    }
    for(i=0;i<n;i++)
    {
        lli  x;
        cin>>x;
        vp[i].second = x;
    }
    sort(vp.begin(),vp.end());
    sm+=k;
    for(i=0;i<n;i++)
    {
       // cout<<sm<<" "<<vp[i].second<<endl;
        if(sm<vp[i].first)break;

        sm+=vp[i].second;
    }
    cout<<sm<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli t,l=0;
    cin>>t;
    while(t--)
    {
        l++;
        //cout<<"Case "<<l<<": ";
        solve();
    }

    return 0;
}


