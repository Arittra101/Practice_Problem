
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
    lli n,b,x,y,sm=0,sm1=0;
    cin>>n>>b>>x>>y;
    vi v;
    v.pb(0);
    for(i=0;i<n;i++)
    {

        if(sm + x>b)
        {
            sm-=y;
        }
        else sm+=x;
        v.pb(sm);


    }
    sm =0;
    for(auto it :  v)
        sm+=it;

    cout<<sm<<endl;


}
int main()
{

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


