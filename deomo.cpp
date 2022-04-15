
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
   lli n,k,x;
   cin>>n>>k>>x;
   vi v(n);
   for(auto &i : v) cin>>i;
   lli i=1,c=0;
   while(i<n)
   {
       while(v[i]<v[i-1])
       {
           v[i]+=x;
            c++;
       }
       i++;
   }
   if(c>k)cout<<"NO"<<endl;
   else cout<<"YES"<<endl;
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

