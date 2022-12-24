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

    lli n, cnt = 0;
    cin >> n;
    string bn = "";
   

    lli l = 2, r = n * 3;
    vector<pair<lli, lli>> v;
    while (l < r)
    {
        cnt++;
     
        v.pb(make_pair(l, r));
        l += 3;
        r -= 3;
    }
  
    cout << cnt << endl;
    for (auto it : v)
    {
        cout << it.first << " " << it.second << endl;
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