
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
    set<lli>s;
   // multiset<lli>s;
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(4);

    s.erase(s.begin());

    auto it =  s.begin();
    it++;
    cout<<*it<<endl;   //there is no array index..you have use to use iteration

   // cout<<s[0];

    auto u_it = s.upper_bound(2);  //greater than two first element location;
    cout<<"upper location Value"<<*u_it<<endl;

    auto l_it = s.lower_bound(3);
     cout<<"upper location value"<<*l _it<<endl;

    auto it1 = s.find(3);  // set iterator

    if(it1 != s.end()) cout<<"YES found"<<endl;

    for(auto it :  s)cout<<it<<" ";  //loop object iteration
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
