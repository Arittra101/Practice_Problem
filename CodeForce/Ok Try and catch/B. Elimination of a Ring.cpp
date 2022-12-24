
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

void solve()
{

    lli n;
    cin >> n;
    vi v;
    for (i = 0; i < n; i++)
    {
        lli x;
        cin >> x;
        v.pb(x);
    }
    lli cnt = 0;
    lli first  = v[0];
    last = v[n - 1];
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (v[i] == v[j])
            {
                if (v[i] != last)
                    cnt++;
                v[i] = -1;
                fast = v[i+1];
                break;
            }
        }
    }
    for (i = 0; i < n; i++)
    {   
        if([v[i]!='-1'])  cnt++;
       // cout << v[i] << " ";
        // if(v[i]!=-1) cnt++;
    }
    cout << cnt << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli t, l = 0;
    cin >> t;
    while (t--)
    {
        l++;
        // cout<<"Case "<<l<<": ";
        solve();
    }

    return 0;
}
