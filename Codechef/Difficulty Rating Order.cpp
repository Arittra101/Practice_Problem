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
    char c;
    cin >> c;

    string s;
    cin >> s;

    s += s;
    if (c == 'g')
    {
        cout << 0 << endl;
        return;
    }
  //  cout << s << endl;
    vi grn;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == 'g')
        {
          //  cout << i << " ";
            grn.pb(i);
        }
    }
  //  cout << endl;
    lli an = INT_MIN;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == c)
        {
           auto it =  upper_bound(grn.begin(), grn.end(), i);
           if(it!=grn.end())
           {
                an =  max(an,abs(*it-i));
           }
          
        }
    }
    cout<<an<<endl;
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