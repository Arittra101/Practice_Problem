
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
        lli n,mx=INT_MIN,l=0,cnt=0;
        cin>>n;
        vi v;
        while(n--)
        {
            lli x;
            cin>>x;
            v.pb(x);
            mx = max(mx,x);
        }
        n = v.size();
        while(1)
        {
            l=0;
            for(i=0; i<n; i++)
            {
                if(v[i]<mx)
                {
                    l++;
                    v[i]++;
                }
            }
            if(l==0)break;
            cnt++;
        }
        cout<<cnt<<endl;

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
