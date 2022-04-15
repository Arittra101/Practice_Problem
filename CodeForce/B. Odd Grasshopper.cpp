
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

   lli x,n,sm;
   cin>>x>>n;
   sm = x;
   lli sm1= sm;
   //vi v(n,0);

   for(i=1;i<=2;i++)
   {

       if(sm%2==0) sm-=i;
       else sm+=i;
       if(i==n)
        sm1 = sm;


   }
  // cout<<sm<<endl;
   if(n<=2)
   {
       cout<<sm1<<endl;
       return;
   }
//
   lli an = n/4;
   an=an*4+2;
   if(an>n) an-=4;
  // cout<<an<<endl;

   for(i=an+1;i<=n;i++)
   {
       //cout<<sm<<" "<<i<<" ";
       if(sm%2==0) sm-=i;
       else sm+=i;

   }
   cout<<sm<<endl;



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


