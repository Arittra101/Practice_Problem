#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli i,j;
#define pii  pair<lli, lli>
#define vi vector<lli>
#define pb push_back
#define mp make_pair
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define SORT(v) sort(v.begin(),v.end());
#define R_SORT(v) sort(v.begin(),v.end(),greater<lli>());
#define en "\n"


void solve()
{
    lli sm=0;
    string s1;
    lli n,k;
    cin>>n>>k>>s1;
    map<lli,lli>m;
    vi v;
    for(i=0; i<n; i++)
    {
        lli s = (lli)s1[i];
        m[s]++;
    }
    if(m.size()<=k)
    {
        cout<<k-m.size()<<endl;
        return;
    }
    for(auto it : m) v.pb(it.second);

    SORT(v);
    for(i=0; i<(v.size()-k); i++) sm+=v[i];
    cout<<sm<<endl;
}
int main()
{
    lli t,l=0;
    solve();
    return 0;
}

