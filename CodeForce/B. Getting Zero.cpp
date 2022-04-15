
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
  lli n,c=-1;
  cin>>n;
  vi v(n);
  for(auto &i : v){
    cin>>i;

    c++;
    if(v[c]==0)
    {
        cout<<0<<" ";
        continue;
    }
    lli mn = INT_MAX;
   // cout<<v[c];
    for(j=0;j<=15;j++)
    {
        lli cn=0;
        lli val =v[c]+j;
        lli x =  val;
        while(x%2==0)
        {
            cn++;
            x=x/2;
        }
      //  cout<<val<<" "<<cn<<" "<<j+15-cn<<endl;
        mn =  min(mn,j+15-cn);

    }
    cout<<mn<<" ";
  }
  cout<<endl;
}
int main()
{




        solve();


    return 0;
}


