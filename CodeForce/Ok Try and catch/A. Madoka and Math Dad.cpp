
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
    lli n,sm=0,c=0;
    cin>>n;
    vi v,v1;

    while(1)
    {

        if(c%2==0)
        {
            v.pb(2);
            sm+=v[c];

        }
        else
        {
            v.pb(1);
            sm+=v[c];
        }
        c++;

        if(sm>n) break;

        if(sm==n)
        {
            for(i=0; i<v.size(); i++)
            {
                cout<<v[i];
            }
            return;
        }

    }
    c=0;
    sm=0;
    while(1)
    {

        if(c%2==0)
        {
            v1.pb(1);
            sm+=v1[c];

        }
        else
        {
            v1.pb(2);
            sm+=v1[c];
        }
        c++;
       // cout<<sm<<endl;
        if(sm==n)
        {
            for(i=0; i<v1.size(); i++)
            {
                cout<<v1[i];
            }
            return;

        }
    }


}
int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
    lli t,l=0;
    cin>>t;
    while(t--)
    {
        l++;
        //cout<<"Case "<<l<<": ";
        solve();
        cout<<endl;
    }

    return 0;
}


