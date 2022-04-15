
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

lli fab(int n)
{

    if(n==0 || n==1)
        return n;
    cout<<fab(n-1)+fab(n-2);


}
lli dynafab(lli n)
{

     lli fi[n+1];
     cout<<n;
     fi[1]=1;
     fi[0]=0;
     for(i=2;i<=n;i++)
     {
         fi[i] = fi[i-1]+fi[i-2];
         cout<<i<<" : "<<fi[i]<<i-1<<i-2<<endl;
     }
     cout<<fi[6];
}
lli prin_fab(int n)
{
    vi v;
    v.pb(0);
    v.pb(1);
    for(i=2;i<=n;i++)
    {
        v.pb(v[i-1]+v[i-2]);
    }
    for(auto it : v)cout<<it<<" ";
}
int main()
{
  //  ios_base::sync_with_stdio(false);
  //  cin.tie(NULL);

        //cout<<"Case "<<l<<": ";
      // cout<<fab(5);
      dynafab(6);


    return 0;
}


