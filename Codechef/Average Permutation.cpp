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
   lli n2 = n;
   
   lli  n1 = n/3;
   lli cnt=1;
   lli x = 1;
   lli y=2;
   i=0;
   j=0;
    while(cnt<=n1)
    {   
         cout<<n-i<<" "<<y+j<<" "<<x+j<<" ";
         i++;
         j+=2;
         cnt++;
         

    }
    
    if(n%3==1)
    {
        // if(n2%2==0)cout<<y+j+1<<" ";
      cout<<n-i<<" ";
    }
    else if(n%3==2) cout<<x+j<<" "<<y+j<<" ";
    // cout<<i<<"<-";
    cout<<endl;
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