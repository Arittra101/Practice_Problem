
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

   lli n;
   cin>>n;
   vi  v(n);
   map<int,int>m;

  for(i=0;i<n;i++)
  {
      lli x;
      cin>>x;
      m[x]++;
    //  cout<<m[i]<<endl;
  }
  lli mx  = INT_MIN;
  for(auto it = m.begin();it!=m.end();it++)
  {
      lli x = it->second;
      mx = max(x,mx);
      //cout<<it->first<<" "<<it->second<<endl;
  }
  lli nd =  abs(n-mx);
  lli cnt=0;
  while(1)
  {
      if(n-mx==0) break;
      else if(mx>=nd)
      {
          cnt+=nd;
          cnt+=1;

          //cout<<cnt<<"c";
          break;
      }
      else {

        cnt+=mx;
        cnt++;
        mx*=2;
       // cout<<cnt<<"D";
        nd = abs(n-mx);

      }
  }
  cout<<cnt<<endl;


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


