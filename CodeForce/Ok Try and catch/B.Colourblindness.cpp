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

    string s, s1;
    cin >> s >> s1;
    lli cnt=0;
    for (i = 0; i < n; i++)
    {

        if ((s[i] == 'R' && s1[i] == 'R') || (s[i] == 'G' && s1[i] == 'G') || (s[i] == 'B' && s1[i] == 'B') || (s[i]=='G'&& s1[i]=='B')||(s[i]=='B'&& s1[i]=='G')||(s[i]=='G'&& s1[i]=='G')) cnt++;
    }
    if(cnt==n)cout<<"YES"<<endl;
    else cout<<"No"<<endl;
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