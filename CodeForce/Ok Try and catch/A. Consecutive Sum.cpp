
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
    lli n,k;
    cin>>n>>k;
    lli n1 = n;
    vi v;
    while(n1--)
    {
        lli x;
        cin>>x;
        v.pb(x);
    }
    lli mx;
    lli sm=0;
    for(i=0;i<k;i++)
    {   mx = v[i];
        for(j=i+k;j<n;j+=k)
        {   //cout<<v[j]<<" ";
            mx = max(mx,v[j]);
        }
        //cout<<mx<<endl;

        sm+=mx;
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


