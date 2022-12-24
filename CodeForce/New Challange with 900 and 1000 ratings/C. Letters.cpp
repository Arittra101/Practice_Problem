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

    lli n, m;
    cin >> n >> m;

    vi a;
    map<lli, lli> mp;
    lli sm = 0;
    for (i = 0; i < n; i++)
    {
        lli x;
        cin >> x;
       
        sm += x;
        a.pb(sm);
         mp[sm] = 1;
    }
    // for(auto it : a)cout<<it<<" "<<endl;
    for (i = 0; i < m; i++)
    {
        lli x;
        cin >> x;
        lli an;
        auto it = upper_bound(a.begin(), a.end(), x);
        lli d = it - a.begin();
        if (mp[x] == 1) d -= 1;
        
        if(d==0) an=x;
        else an = x-a[d-1];
        cout <<d+1<<" "<<an<< endl;
     
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
        solve();
  
    // cout<<"Case "<<l<<": ";
}