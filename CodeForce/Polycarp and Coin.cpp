#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli i,j;

void solve()
{
  lli t;
  cin>>t;
  while(t--)
  {
      lli x;
      cin>>x;
      lli x1 = x/3;
      lli x2 = abs(x1-x);
      lli x3;
      if(x2%2==0)

         x3 = x2/2;

      else
      {
          x1++;
          x3 = x2/2;
      }
      cout<<x1<<" "<<x3<<endl;
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

