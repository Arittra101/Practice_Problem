
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

// reverse binary -> lli res = 0; while(n>0){ res <<= 1; res = res(n & 1); n >>= 1;}
// decimal to binary string -> string s = bitset<N>(n).to_string();
// binary string to decimal -> lli n = bitset<N>(s).to_ullong();
// Case output -> cout << "Case " << j << ": " << mx << endl;


lli factorial(lli n)
{

    if(n==1)
        return 1;
    else
        return n*factorial(n-1);
}
lli ncr(lli n,lli i)
{
    lli up = factorial(n);
    cout<<up<<endl;
    lli down = factorial(n-i);
    lli beside = factorial(i);

    return ((up)/(down*beside));
}


void solve()
{

  lli t;
  cin>>t;
  while(t--)
  {
      lli n;
      cin>>n;
      int sum=0;
      for(lli i=0;i<=n;i++)
      {
          if(i%2==0)
          {
              sum+=ncr(n,i);
          }
          else
            sum-=ncr(n,i);
      }
  }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //solve();
    cout<<ncr(100,2);
    return 0;
}

