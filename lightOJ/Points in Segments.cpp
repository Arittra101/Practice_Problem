#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli i, j,l=0;

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

    lli n, q;
    cin >> n >> q;
    vi v;
    for (int i = 0; i < n; i++)
    {
        lli x;
        cin >> x;
        v.pb(x);
    }l++;
     cout<<"Case "<<l<<":"<<endl;
    while (q--)
    {
       
        lli a, b;
        cin >> a >> b;

        vi::iterator lw = lower_bound(v.begin(), v.end(), a);
        vi::iterator up = upper_bound(v.begin(), v.end(), b);

        lli lw1 = abs(v.begin() - lw);
        lli up1 = abs(v.begin() - up);
        
        lw1++,up1++;
        // cout << lw1 << " " << up1 << endl;
        lli ans = abs(up1 - lw1) ;
        cout << ans << endl;
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
    
}