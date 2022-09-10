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

    lli n, k;
    cin >> n >> k;
    if (k == 1)
    {
        cout << "Yes" << endl;
        return;
    }
    else if (n <= k )
    {
        cout << "NO" << endl;
        return;
    }

    else
    {

        lli n1 = k - 1;

        lli sm = (n1 + 1) * n1;
        sm = sm / 2;
        // cout<<"sumation-> "<<sm<<endl;
        if (sm >= n)
        {
            cout << "NO" << endl;
            return;
        }
        else
        {

            lli an = abs(sm - n); // 1
            // cout<<"extra check-> and k "<<an<<" "<<k<<endl;
            if (an < k)
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                cout << "Yes" << endl;
                return;
            }
        }
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