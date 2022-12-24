
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
    map<char, int> mp;
    lli op = s.size();
    lli cnt = 0;
    for (i = 0; i < s.size()-1; i++)
    {
            for(j=i+2;j<s.size()-1;j++)
            {
                if(s[i]==s[j] && s[i+1]==s[j+1])
                {
                    cout<<"YES"<<endl;
                    return;
                }
            }
    }

  
        cout << "NO" << endl;
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
