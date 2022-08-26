
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
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,r,l,k;
        cin>>n>>l>>r>>k;
        vector<lli>v;
        while(n--)
        {
            lli x;
            cin>>x;
            v.pb(x);
        }
        n = v.size();
        SORT(v);
        lli c=0;
        for(i=0; i<n; i++)
        {
            lli f=0;
            if(v[i]>k) break;
            if(v[i]>=l && v[i]<=r )
            {
                k-=v[i];
                c++;

            }
        }
        cout<<c<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
