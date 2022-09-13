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
bool RSORT1(pair<lli, lli> p1, pair<lli, lli> p2)
{
    return p1.first > p2.first;
}
void solve()
{

    string s;
    cin >> s;
    lli cost = abs(s[0] - s[s.size() - 1]);
    vector<pair<char, lli>> v;
    char f = min(s[0], s[s.size() - 1]);
    char l = max(s[0], s[s.size() - 1]);

    for (i = 1; i < s.size() - 1; i++)
    {
        if (s[i] >= f && s[i] <= l)
        {
            pair<char, lli> p = {s[i], i};
            v.pb(p);
        }

    }
    if (s[0] > s[s.size()-1])
        sort(v.begin(), v.end(), RSORT1);
    else
        sort(v.begin(), v.end(), SORT1);
    cout << cost << " " << v.size() + 2 << endl;
      cout << 1 << " ";
    for (auto it : v)
    {
        cout<<it.second+1 << " ";
        // cout << it.first << " " << it.second << endl;
    }

    cout << s.size();

    cout << endl;
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