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

    map<string, lli> mp;

    lli n;
    cin >> n;
    lli pr = 3;
    vector<string> v, v1, v2;

    for (i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.pb(s);
        mp[s]++;
    }
    for (i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v1.pb(s);
        mp[s]++;
    }
    for (i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v2.pb(s);
        mp[s]++;
    }
    
    lli sm=0,sm1=0,sm2=0;
    for (i = 0; i < n; i++)
    {
        
        if(mp[v[i]]==1)sm+=3;
        else  if(mp[v[i]]==2)sm+=1;
        
        
        
    }
    for (i = 0; i < n; i++)
    {
       if(mp[v1[i]]==1)sm1+=3;
        else  if(mp[v1[i]]==2)sm1+=1;
    }
    for (i = 0; i < n; i++)
    {
      if(mp[v2[i]]==1)sm2+=3;
        else  if(mp[v2[i]]==2)sm2+=1;
    }
    cout<<sm<<" "<<sm1<<" "<<sm2<<endl;
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