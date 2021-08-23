
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




void solve()
{

  string a;
  string b;
  vector<int>v;
  vector<int>:: iterator it;
  int sum=0;
  int sum1=0;
  cin>>a>>b;
  for(int i=0;i<a.size();i++)
  {
      if(a[i]>='0'&&a[i]<='9')
      {
          sum+=(a[i]-'0');
      }
  }
  for(int i=0;i<b.size();i++)
  {
      if(b[i]>='0'&&b[i]<='9')
      {
          sum1+=(b[i]-'0');
      }
  }

  v.push_back(sum*sum1);
  v.push_back(sum+sum1);
  v.push_back(abs(sum-sum1));


  sort(v.begin(),v.end());

  it = v.begin();
  it++;
  cout<<"\""<<*it<<"\"";




}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}

