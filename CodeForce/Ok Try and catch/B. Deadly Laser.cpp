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
lli sx, sy;
bool SORT1(pair<lli, lli> p1, pair<lli, lli> p2)
{
    return p1.first < p2.first;
}
lli dis(int x, int y)
{
    return abs(sx - x) + abs(sy - y);
}
void solve()
{

    lli n, m, d;
    cin >> n >> m >> sx >> sy >> d;

    lli org = dis(1, 1);
    lli eng = dis(n, m);

    if (org <= d || eng <= d)
    {
        cout << -1 << endl;
        //cout<<"D";
        return;
    }

    lli one = (sx - d) - 1;
    lli thr = abs(sy - m) - d;

    lli tw = abs(sx - n) - d;
    lli fr = (sy - d) - 1;

   // cout<<one<<" "<<thr<<endl;
  //  cout<<tw<<" "<<fr<<endl;
    if (one > 0 && thr > 0)
    {
        lli ans = (n - 1) + (m - 1);
         cout << ans << endl;
        return;
    }
    else if (tw > 0 && fr > 0)
    {
        lli ans = (n - 1) + (m - 1);
         cout << ans << endl;
        return;
    }
   
    cout << -1 << endl;
    
    return;
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