
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
    lli e,f,c;
    cin>>e>>f>>c;
    lli tl = e+f,extra = 0,sum=0;
    while((tl+extra)>=c)
    {


        lli tl1 = tl;
        tl = (extra + tl)/c;

       // cout<<"t1 "<<tl<<endl;
        sum+=tl;
        //cout<<"sm:  "<<sum<<endl;;
        extra = (extra+tl1)%c;
        //cout<<"extra "<<extra<<endl;

    }
    cout<<sum<<endl;

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
        //cout<<"Case "<<l<<": ";
        solve();
    }

    return 0;
}


