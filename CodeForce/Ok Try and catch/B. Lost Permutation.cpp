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

    lli n, m;
    cin >> n >> m;
    map<lli, lli> mp;

    vi v;
    lli mx = INT_MIN;
    for (i = 0; i < n; i++)
    {
        lli x;
        cin >> x;
        v.pb(x);
        mx = max(x, mx);
        mp[x] = 1;
    }
    lli sm = 0;
    i = 1;
    while (sm <= m)
    {

        if (!mp[i])
        {
            sm += i;
            v.pb(i);
            mx = max(i, mx);
        }
        
        i++;
        if (sm == m)
        {   
     
            if (mx == v.size())
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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