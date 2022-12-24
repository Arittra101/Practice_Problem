
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
    string s;
    cin >> s;
    lli cnt = 0, zr = 1, one = 0,start=0;
    for (i = 0; i < n; i++)
    {
        if (s[i] == '1')   start = 1;

        if (start == 1)
        {   
            // cout<<"d";
            if (s[i] == '1' && one == 1)
            {
                // cout<<"1"<<endl;
                cnt++;
                zr = 1;
                one = 0;
            }
            else if (s[i] == '0' && zr == 1)
            {
               //  cout<<"2"<<endl;
                cnt++;
                one = 1;
                zr = 0;
            }
        }
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
