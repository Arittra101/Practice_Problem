
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli i,j;
#define pii pair<lli, lli>
#define vi vector<lli>
#define pb push_back
#define mp make_pair
#define yes cout << "YES" \
                 << "\n";
#define no cout << "NO" \
                << "\n";
#define SORT(v) sort(v.begin(), v.end());
#define R_SORT(v) sort(v.begin(), v.end(), greater<lli>());
#define en "\n"

void solve()
{

 
    lli n;
    cin>>n;

    vi v;
    for(i=0;i<n;i++)
    {
        lli x;
        cin>>x;
        v.pb(x);
    }

    SORT(v);
    lli mn =v[0];
    lli mx = v[n-1];
    lli mnc=1;
    lli mxc=1;
    for(i=1;i<n-1;i++)
    {
        if(mn==v[i])mnc++;
         if(mx==v[i]) mxc++;
    }
    cout<<mnc<<" "<<mxc<<endl;
   lli ans = mnc*mxc;
   ans = ans*2;
    cout<<ans<<endl;
   
   

   

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli t, l = 0;
    cin >> t;
    while (t--)
    {
        l++;
        // cout<<"Case "<<l<<": ";
        solve();
    }

    return 0;
}
