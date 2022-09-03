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
    set<lli> s;
    vector<lli> v[n];

    for (i = 0; i < n; i++)
    {
        lli x;
        cin >> x;
        for (j = 0; j < x; j++)
        {
            lli x1;
            cin >> x1;
            v[i].pb(x1);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < v[i].size(); j++)
        {
            // s.insert(v[i][j]);
            cout << v[i][j] << " ";
        }
        cout << endl;
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