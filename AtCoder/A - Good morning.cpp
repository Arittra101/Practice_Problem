#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
signed main()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0; i<=n-1; i++)cin>>a[i];
    for(ll ans=0; ans<=n; ans++)
    {
        bool ok=true;
        for(ll x:a)
        {
            if(x==ans)ok=false;
        }
        if(ok)
        {
            cout<<ans<<endl;
            return 0;
        }
    }
    return 0;
}
