#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli i, j;

#define pii pair<lli, lli>
#define vi vector<lli>
#define pb push_back
#define mp make_pair
#define yes cout << "YES" \
                 << "\n";
#define no cout << "NO" \
                << "\n";
#define SORT(v) sort(v.begin(), v.end());
#define R_SORT(v) sort(v.begin(), v.end(), greater<lli>());
#define en "\n"
lli s;

bool SORT1(pair<lli, lli> p1, pair<lli, lli> p2)
{
  return p1.first < p2.first;
}
void solve()
{

  lli n;
  cin >> n;
  vi v;
  lli ans = INT_MIN;
  for (i = 0; i < n; i++)
  {
    lli x;
    cin >> x;
    v.pb(x);
  }

  if (n == 1)
    ans = 0;
  for (i = 0; i < n - 1; i++)
  {
    ans = max(ans, v[n - 1] - v[i]);
  }
  for (i = 1; i < n; i++)
  {

    ans = max(ans, v[i] - v[0]);
  }
  for (i = 1; i < n; i++)
  {
    ans = max(ans, v[i - 1] - v[i]);
  }
  cout << ans << endl;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  lli t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  // cout<<"Case "<<l<<": ";
}