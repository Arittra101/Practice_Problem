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

    vector<string> v;
    for (i = 0; i < 8; i++)
    {   string s;
        for(j=0;j<8;j++)
        {
            char x;
            cin>>x;
            s+=x;
        }
        v.pb(s);
    }

    lli cnt = 0;
    for (i = 0; i < 8; i++)
    {   
        string s = v[i];
       // cout<<s<<endl;
        for (j = 0; j < v[i].size(); j++)
        {
            if (s[j] == 'R')
                cnt++;
        }
        if (cnt == 8)
        {
            cout << "R" << endl;
            return;
        }
     
        cnt=0;
    }

    cout << "B" << endl;
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