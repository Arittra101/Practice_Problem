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
    return p1.first > p2.first;
}
void solve()
{
    string s;  cin >> s;
    lli p;     cin >> p;

    string s1;
    s1 = s;

    vector<pair<char,int>> v;

    lli sm = 0;
    for (i = 0; i < s.size(); i++)
    {
        sm = sm + abs('a' - s[i]) + 1;
        v.pb({s[i],i});
    }

    //   cout<<sm<<endl;
    if (sm <= p)
    {
        cout << s << endl;
        return;
    }

    sort(v.begin(),v.end(),SORT1);
    vi ind(s.size()+1,0);
    lli sm1 = 0;
    p = abs(sm - p);
    for (i = 0; i < s.size(); i++)
    {
        if (sm1 < p)
        {
            lli an = abs('a' - v[i].first) + 1;
            //  cout << "->" << an << endl;
            sm1 += an;
            ind[v[i].second]=-1;

            
        }
        else
        {
            break;
        }
    }
    for (i=0;i<s.size();i++)
    {
        if(ind[i]!=-1)cout<<s[i];
    }
    cout << endl;
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