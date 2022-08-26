#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
//lli i,j;

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
      lli n;
      cin>>n;

      map<int,int>m;
      for(int i=0;i<n;i++)
      {
          lli x;
          cin>>x;
          m[x]++;
      }

      int max=0;
      for(auto it : m)
      {
          if(it.second>max)
          {
              max = it.second;
          }
      }
      cout<<max<<endl;

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
