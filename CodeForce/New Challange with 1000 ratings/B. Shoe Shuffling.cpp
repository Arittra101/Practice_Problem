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

// vector<lli> gv(10E8);

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
    map<lli,lli>gv;
    vector<lli> v;
    map<lli, lli> mp;

    for (i = 0; i < n; i++)
    {
        lli x;
        cin >> x;
        v.pb(x);
        if (mp[x] == 0)
        {
            mp[x]++;
        }
        else if (mp[x] > 0)
        {
            gv[x] = i + 1;
            mp[x]++;
        }
    }

    //     for(i=0;i<gv.size();i++)
    //     {
    //         cout<<i<<"->"<<gv[i]<<" ";
    //     }
    // cout<<endl;

    for (auto it : mp)
    {
        if (it.second < 2)
        {
           
            cout << -1 << endl;
            return;
        }
    }
    lli fp = 1;
    lli sp;
    j = 1;
    for (auto it : mp)
    {
        sp = gv[it.first];

        // cout<<"Map first->"<<it.first<<" "<<"Map Second->"<<it.second<<endl;
        // cout<<"Start->"<<fp<<" "<<"Finish->"<<sp<<endl;
        cout << sp << " ";
        for (i = fp; i < sp; i++)
            cout << i << " ";

        fp = sp + 1;
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