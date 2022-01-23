
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
    lli n,m,r,c;
    cin>>n>>m>>r>>c;
    vector<char>v[n];
    vi v1;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            char x;
            cin>>x;
            v[i].pb(x);
        }
    }
    if(v[r-1][c-1]=='B')
    {
        cout<<0<<endl;
        return;
    }
    v1.pb(3);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(v[i][j]=='B')
            {
                if(i==(r-1) || j==(c-1))
                    v1.pb(1);

                else v1.pb(2);
            }

        }

    }
    SORT(v1);
    if(v1[0]==3)
    {
        cout<<-1<<endl;
        return;
    }
    cout<<*min_element(v1.begin(),v1.end())<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

