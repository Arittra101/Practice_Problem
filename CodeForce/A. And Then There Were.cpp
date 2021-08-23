
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
      lli mul = 1,i=0;
      while(1)
      {
          lli p = pow(2,i);
          if(p>n)
          {
              break;
          }
          i++;
      }
     lli p = pow(2,(i-1));
      cout<<p-1<<endl;

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

