
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

  lli fib[10009];
  for(i=0;i<6;i++)
  {
      lli x;
      cin>>x;
      fib[i]=x;
  }
  lli n;
  cin>>n;

  for(i=6;i<=n;i++)
  {
      fib[i] = (fib[i-1]+ fib[i-2]+ fib[i-3]+ fib[i-4]+ fib[i-5]+ fib[i-6])%10000007;
  }
  cout<<fib[n]%10000007<<endl;
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
        cout<<"Case "<<l<<": ";
        solve();
    }

    return 0;
}

