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
    lli ans = 0;
    lli cap = INT_MIN;

    while (n--)
    {
        lli a,b;
        cin >> a >> b;  
        ans += b;
        ans -= a;
        cap = max(ans, cap);
    }
    cout << cap;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    // cout<<"Case "<<l<<": ";
}