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

    vi dem;
    for (i = 1; i <= n; i++)
        dem.pb(i);
    vi ans;
    lli i = n / 2;
    if (n % 2 == 0)
        i -= 1;
    j = n - 1;
    lli cnt = n / 2;
    while (cnt--)
    {
        
        ans.pb(dem[i]);
        ans.pb(dem[j]);
        i--;
        j--;
        // cnt++;
    }

    if (n % 2 != 0)
    {
        ans.pb(dem[i]);
    }

    for (auto it : ans)
        cout << it << " ";
    cout << endl;
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    lli t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // cout<<"Case "<<l<<": ";
}