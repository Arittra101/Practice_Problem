

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


#define pii  pair<lli, lli>
#define vi vector<lli>
#define pb push_back
#define mp make_pair
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define en "\n"

void solve()
{

  lli t;
  cin>>t;
  while(t--)
  {
      lli n,k,n1;
      cin>>n>>k;
      n1 = 2*n-1;
      for(lli i=0;i<n;i++)
      {
          for(lli j=0;j<i+1;j++)
          {
              cout<<k<<" ";
          }
          cout<<endl;
      }
      for(lli i=n;i<n1;i++)
      {
          for(lli j = 0;j<n1-i;j++)
          {
              cout<<k<<" ";
          }
          cout<<endl;
      }


  }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}

