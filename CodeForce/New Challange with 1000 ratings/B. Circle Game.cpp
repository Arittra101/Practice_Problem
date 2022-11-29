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
    
    for (i = 0; i < n; i++)
    {
        lli x;
        cin >> x;
        v.pb(x);
     
    }

    if (n % 2 != 0)
    {
        cout << "Mike" << endl;
        return;
    }

    else
    {

        // if (s.size() == 1)
        // {
        //     cout << "Joe" << endl;
        //     return;
        // }

        // for (i = 0; i < n - 1; i+=2)
        // {
        //     if (v[i] <= v[i + 1])
        //     {
        //         //cout<<v[i]<<" "<<v[i+1];
        //         cout << "Joe" << endl;
        //         return;
        //     }
        // }
        // cout<<"Mike"<<endl;
        // return;

        lli mn = INT_MAX;
        lli mn1 = INT_MAX;
        lli ind;
        lli ind1;
        for (i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (mn < v[i])
                {
                    mn = min(mn, v[i]);
                    ind = i;
                }
            }
            if (i % 2 == 1)
            {
                if (mn1 < v[i])
                {
                    mn1 = min(mn1, v[i]);
                    ind1 = i;
                }
            }
        }

        if (mn < mn1)
        {
            cout << "Joe" << endl;
            return;
        }
        else if (mn > mn1)
        {
            cout << "Mike" << endl;
            return;
        }
        else
        {
            if (ind < ind1)
            {
                cout << "Joe" << endl;
                return;
            }
            else
            {
                cout << "Mike" << endl;
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