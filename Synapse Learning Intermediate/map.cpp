
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli i,j;

#define pii  pair<lli, lli>
#define vi vector<lli>
#define pb push_back

#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define SORT(v) sort(v.begin(),v.end());
#define R_SORT(v) sort(v.begin(),v.end(),greater<lli>());
#define en "\n"


void solve()
{
    map<int,int>mp;
    map<int,int>::iterator it;   //there is array index and iteration

    mp[0]++;
    mp[1]++;
    mp[2]++;

    cout<<mp[0]<<endl;   //return value of key there is array index


   it =mp.begin();   //when I use iteration
   cout<<"when I use iteration"<<it->first<<" "<<it->second<<endl;

   auto it1 = mp.begin();
   cout<<"when I use auto it"<<it1.first<<" "<<it1.second<<endl;  //you will get error because auto means iterator



    for( auto it2 : mp)  // object auto iteration in for loop
        cout<<it.first<<" "<<it.second<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
