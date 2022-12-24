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

    lli n, x, y;
    cin >> n >> x >> y;
    queue<lli> qu;
    lli mx = max(x, y);
    lli mn = min(x, y);

    if (mx > 0 && mn == 0)
    {
        
        lli x = -1;
        for (i = 1; i <= n;)
        {   
             qu.push(i);
            if (x != -1)
            {
                i += (mx);
            }
            else
                i += (mx + 1);

           
            x = i;
        }
        if (i == n + 1)
        {
            while (qu.size() != 0)
            {
              
                for(i=0;i<mx;i++)   cout << qu.front() << " ";
                qu.pop();
            }
        }
        else
        {
            cout << -1 << endl;
            return;
        }
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
        return;
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