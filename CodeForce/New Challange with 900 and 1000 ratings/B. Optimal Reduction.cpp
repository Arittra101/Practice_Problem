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
    vi v;
    lli mx = INT_MIN;
    lli ind;
    for (i = 0; i < n; i++)
    {
        lli x;
        cin >> x;
        v.pb(x);
        if (x > mx)
        {
            mx = max(mx, x);
            ind = i;
        }
    }

    for (i = ind - 1; i >= 1; i--)
    {
        if (v[i] < v[i - 1])
        {
            no;
            return;
        }
    }
    for (i = ind + 1; i < n - 1; i++)
    {
        if (v[i] < v[i + 1])
        {  
            no;
            return;
        }
    }
    yes;
   
}
int main()
{
  
    lli t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // cout<<"Case "<<l<<": ";
}