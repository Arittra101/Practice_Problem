
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
{   `

  lli t;
  cin>>t;
  while(t--){
    lli a,b,c,n;
    cin>>a>>b>>c>>n;
    vector<lli>v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(),v.end(),greater<lli>());
    lli mot = (v[0]-v[1])+(v[0]-v[2]);
    n = n-mot;
    if(n<0)cout<<"NO"<<endl;
    else{
        if(n%3==0)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
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

