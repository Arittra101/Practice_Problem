
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
        lli n,c=0;
        cin>>n;
        vi v;
        while(n--)
        {
            lli x;
            cin>>x;
            v.pb(x);
        }
        n =v.size();
        for(i=0;i<n-1;i++)
        {
            lli mx = max(v[i],v[i+1]);
            lli mn = min(v[i],v[i+1]);

            while(1)
            {

                mn*=2;
                if(mn>=mx)break;
                else{
                    c++;

                }
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
