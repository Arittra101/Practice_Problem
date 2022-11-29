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
    lli cnt = 0;
    if (n == 1)
    {
        cout << "YES" << endl;
        return;
    }
    if (v[0] < v[1])
        cnt++;
    if (v[n - 2] > v[n - 1])
        cnt++;
    // cout<<cnt<<" ";
    if (cnt > 1)
    {
        cout << "NO" << endl;
        return;
    }

    for (i = 1; i < n - 1; i++)
    {
        if (v[i] < v[i - 1])
        {
            for (j = i + 1; j < n; j++)
            {
                if(v[j]<v[j+1]) cnt++;
                if(cnt>1){ 
                    cout<<"NO"<<endl;
                    return;
                }
            }

        }
        
    }
    cout << "YES" << endl;
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