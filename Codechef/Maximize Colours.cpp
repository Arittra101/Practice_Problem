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
 
     lli x,y,z;
     cin>>x>>y>>z;

     vi v {x,y,z};
     
     R_SORT(v);
     
     x = v[0];y=v[1];z=v[2];
     
    lli cnt=3;
    lli sm=0;
     if(x==0) cnt--;
     if(y==0) cnt--;
     if(z==0) cnt--;


    if(x>1 && y>1) {
        sm++;
        x--;
        y--;
    }
    if(x>1 && z>1) {
        sm++;
        x--;
        z--;
    }
    if(y>1 && z>1) 
    {
        sm++;
    }
    lli ans = cnt+sm;
     cout<<ans<<endl; 
     
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