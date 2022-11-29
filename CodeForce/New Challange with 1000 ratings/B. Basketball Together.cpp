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
    lli pw;
    cin >> pw;

    vi v;
    for (i = 0; i < n; i++)
    {
        lli x;
        cin >> x;
        v.pb(x);
    }

    R_SORT(v);
    lli n1 = n;
    lli cnt = 0;
    for (i = 0; i < n; i++)
    {
        lli nd = pw / v[i];
        if (n1 < nd + 1)
        {
            break;
        }
        n1 = n1 - (nd + 1);
        // cout<<nd<<" "<<n1<<endl;
        cnt++;
    }
    cout << cnt << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    // cout<<"Case "<<l<<": ";
}