
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
   // lli n,sm=0,sm1=0;
   // cin>>n;
   // vi v(n);
   // for(auto &i : v) cin>>i;
   lli l1,l2,l3;
   cin>>l1>>l2>>l3;
   vi v;
   v.pb(l1);
   v.pb(l2);
   v.pb(l3);
   SORT(v);
   if(v[2]<=(v[0]+v[1]))cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

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


