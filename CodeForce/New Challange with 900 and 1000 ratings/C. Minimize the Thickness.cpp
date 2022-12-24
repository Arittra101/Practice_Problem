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
 
   string s;
   cin>>s;
   string s1 = "YesYes";
   map<char,int>mp;

   for(i=0;i<s.size();i++)
   {
    if(s[i]!='Y' && s[i]!='e' && s[i]!='s') 
    {
        cout<<"NO"<<endl;
        return;
    }
    else{
        mp[s[i]]=i;
    }
   }
  

    vi v;
   for(i=0;i<s.size();i++)
    {
        for(j=0;j<s1.size();j++)
        {
            if(mp[s1[j]]!=0)
            {
                v.pb(mp[s1[j]]);
            }
        }
    }
    for(i=0;i<v.size()-1;i++)
    {
        if(v[i]+1!=v[i+1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;

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