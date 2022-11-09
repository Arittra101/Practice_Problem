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
    
    string s;
    cin >> s;
    n=s.size();
    lli zr = 0, on = 0;

    lli mx = 1;
    for (i = 0; i < n; i++)
    {
        if (s[i] == '0')
            zr++;
        else
            on++;
    }

    //  cout<<zr<<" "<<on<<endl;
    lli zr2 = 1, on2 = 1;
    for (i = 0; i < n - 1; i++)
    {
        if (s[i] == '1' && s[i + 1] == '1')
        {
            on2++;
            mx = max(mx, on2);
        }
        if (s[i] == '0' && s[i + 1] == '0')
        {
            zr2++;
            mx = max(mx, zr2);
        }
        else if (s[i] == '1' && s[i + 1] == '0')
            on2 = 0;
        else if (s[i] == '0' && s[i + 1] == '1')
            zr2 = 0;
    }

    // cout<<mx<<endl;

    lli mx2 = mx*mx;
    lli mx3 = zr*on;
    lli ans = max(mx2,mx3);
  //  mx2 = max(mx * mx, zr * on);
    cout << ans << endl;
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