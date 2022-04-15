
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
    lli m,n;
    cin>>n>>m;
    string s[n];
    for(auto &i : s)
    {
        cin>>i;
    }
    vector<string>v;
    for(i=0; i<n; i++)
    {
        string an;
        for(j=0; j<m; j++)
        {

            if(s[i][j]=='X')
            {
                if(an.size()>1) v.pb(an);
                an.clear();
            }
            else
                an+=s[i][j];
        }
        if(an.size()>1)
        {
            v.pb(an);
            an.clear();
        }

    }
    for(i=0; i<m; i++)
    {
        string an;
        for(j=0; j<n; j++)
        {
            if(s[j][i]=='X')
            {
                if(an.size()>1)
                    v.pb(an);
                an.clear();
            }
            else
                an+=s[j][i];
        }
        if(an.size()>1)
        {
           // cout<<an<<"D"<<endl;
            v.pb(an);
            an.clear();
            //cout<<"D";
        }


    }
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;
  // for(auto it : v)
   // cout<<it<<" "<<endl;
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
        cout<<"Case "<<l<<": ";
        solve();
    }

    return 0;
}


