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

    string a, b;
    cin >> a >> b;
    lli xa = 0;
    lli xb = 0;

    lli s1 = a.size() - 1;
    lli s2 = b.size() - 1;

    if ((a[s1] == 'S' && b[s2] == 'M') || (a[s1] == 'S' && b[s2] == 'L'))
        cout << "<" << endl;
    else if (a[s1] == 'S' && b[s2] == 'S')
    {
        if (s1 > s2)
            cout << "<" << endl;
        else if (s1 == s2)
            cout << "=" << endl;
        else
            cout << ">" << endl;
    }

    else if ((a[s1] == 'L' && b[s2] == 'M') || (a[s1] == 'L' && b[s2] == 'S'))
        cout << ">" << endl;
    else if (a[s1] == 'L' && b[s2] == 'L')
    {
        if (s1 > s2)
            cout << ">" << endl;
        else if (s1 == s2)
            cout << "=" << endl;
        else
            cout << "<" << endl;
    }

    else if (a[s1] == 'M')
    {
        if (b[s2] == 'L')
            cout << "<" << endl;
        else if (b[s2] == 'M')
            cout << "=" << endl;
        else
            cout << ">" << endl;
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