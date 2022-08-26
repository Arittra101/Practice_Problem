
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
        lli n;
        cin>>n;
        vector<lli>v;
        lli sum=0;
        while(n--)
        {
            lli x;
            cin>>x;
            v.pb(x);
            sum+=x;
        }
        n = v.size();
        lli flag = 0;
        for(i=2; i<sum; i++)
        {
            if(sum%i==0)
            {
                flag = 1;
                break;
            }
        }

        if(flag)
        {
            cout<<n<<endl;
            for(i=0; i<n; i++)
            {
                cout<<i+1<<" ";
            }
            cout<<endl;

        }
        else
        {
            lli c = 0;
            cout<<n-1<<endl;
            for(i=0; i<n; i++)
            {
                if(v[i]%2!=0 && c<1)
                {
                    c++;
                }
                else cout<<i+1<<" ";

            }
            cout<<endl;
        }

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
