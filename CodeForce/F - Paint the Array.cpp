

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
    lli n,flag=1,gcd_even=0,gcd_odd=0;
    cin>>n;
    vi v(n);
    for(auto &i : v) cin>>i;

    for(i=0; i<n; i+=2) gcd_even = __gcd(gcd_even,v[i]);
    for(i=1; i<n; i+=2) gcd_odd = __gcd(gcd_odd,v[i]);

    for(i=0; i<n; i+=2)
    {
        if(v[i]%gcd_odd==0)
        {
            flag = 0;
            break;
        }
    }
    if(flag)
    {
        cout<<gcd_odd<<endl;
        return;
    }

    for(i=1; i<n; i+=2)
    {
        if(v[i]%gcd_even==0)
        {
            flag = 0;
            cout<<0<<endl;
            return;

        }
    }
    cout<<gcd_even<<endl;


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

