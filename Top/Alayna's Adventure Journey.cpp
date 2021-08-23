
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
#define en "\n"




void solve()
{
      lli n;
      cin>>n;
      lli mx=0;
      for(i=0;i<n;i++)
      {
          lli x;
          cin>>x;
          mx = max(mx,x);
      }
      cout<<mx<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}

