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
   cin>>n;
    vi v;
   for(i=0;i<n;i++)
   {
    lli x;
    cin>>x;
    v.pb(x);
   }
    lli x =  v[0]*2-1;
    lli cnt=0;
    
   for(i=1;i<n;i++)
   {    
        if(v[i]%v[0]==0) cnt--;
        cnt+= (v[i]/x);
   }
  

   cout<<cnt<<endl;

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