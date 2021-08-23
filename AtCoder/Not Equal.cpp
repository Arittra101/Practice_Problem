
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli mod = 1000000007;
//lli i,j;

#define pii  pair<lli, lli>
#define vi vector<lli>
#define pb push_back
#define mp make_pair
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define en "\n"

// reverse binary -> lli res = 0; while(n>0){ res <<= 1; res = res(n & 1); n >>= 1;}
// decimal to binary string -> string s = bitset<N>(n).to_string();
// binary string to decimal -> lli n = bitset<N>(s).to_ullong();
// Case output -> cout << "Case " << j << ": " << mx << endl;



void solve()
{

  lli t,ans=1;
  cin>>t;;
  vi v;
  for(lli i=0;i<t;i++)
  {
      lli x;
      cin>>x;
      v.push_back(x);
  }
  sort(v.begin(),v.end());
  for(lli i=0;i<t;i++)
  {
      lli x =  v[i]-i;
      if(x<=0)
      {
          ans=0;
          break;
      }
      else {

        ans*=x;
        ans = ans%1000000007;
      }
  }
  cout<<ans;


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}

