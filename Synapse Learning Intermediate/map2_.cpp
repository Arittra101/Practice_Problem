
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
    // map<int,int>mp;
    vi v(3);

   //  for(auto &x : v)cin>>x;

    map<lli,vector<lli>> mp;
    //mp.insert(make_pair(1,v));
    mp[1]= {1,2,3};
    for(auto &y : mp)
    {

        cout<<y.first<<endl;
      //  vi temp = y.second;
        vi temp  = mp[y.first];
        for(auto it  : temp) cout<<it<<" ";
            en;
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
