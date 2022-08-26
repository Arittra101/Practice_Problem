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
        lli n,k;
        lli c=0;
        cin>>n>>k;
        lli k1 = n/2;
        if(n%2==0 && k>k1)cout<<-1<<endl;
        else if(n%2!=0 && k>k1+1) cout<<-1<<endl;
        else
        {
            for(i=1; i<=n; i++)
            {
                for(j=1;j<=n; j++)
                {
                    if(i%2!=0&&i==j &&c<k)
                    {
                        cout<<"R";
                        c++;
                    }
                    else cout<<".";
                }
                cout<<endl;
            }
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
