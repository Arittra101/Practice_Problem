
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
#define en "\n"


void solve()
{
    lli n,m,c;
    cin>>n>>m;
    vector<char>v[m];

    for(i=0; i<n; i++)
    {  c=0;
        for(j=0; j<m; j++)
        {
            char x;
            cin>>x;
            v[i].pb(x);

            if(v[i][j]=='.')
            {
                if(i%2==0)
                {
                    if(c%2==0)
                        v[i][j]='W';
                    else v[i][j]='B';
                }
                else
                {
                    if(c%2==0)
                        v[i][j]='B';
                    else v[i][j]='W';
                }

            }
            c++;

        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            cout<<v[i][j];
        cout<<endl;
    }

}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //  cout.tie(NULL);
    solve();
    return 0;
}


