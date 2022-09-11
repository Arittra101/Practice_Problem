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
  lli pos = 0;
  lli neg = 0;

  lli mx = INT_MIN;
  lli mn = INT_MAX;
  lli mx1 = INT_MIN;
  for (i = 0; i < n; i++)
  {
    lli x;
    cin >> x;
    mx1 = max(mx1, abs(x));
    mx = max(mx, x);
    mn = min(mn, x);
    if (x > 0)
      pos = 1;

    else if (x < 0)
      neg = 1;
  }

  if (pos == 1 && neg == 0)
  {
    lli an_mx = mx * mx;
    lli an_mn = mn * mn;
    cout << an_mn << " " << an_mx << endl;
  }
  else if (pos == 0 && neg == 1)
  {
    lli an_mx = mn * mn;
    lli an_mn = mx * mx;
    cout << an_mn << " " << an_mx << endl;
  }
  else
  {

   // cout << mx1 << " " << mx << " " << mn << endl;
    lli an_mx = mx1 * mx1;
    lli an_mn = mx * mn;
    cout << an_mn << " " << an_mx << endl;
  }
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