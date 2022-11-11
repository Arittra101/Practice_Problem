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

    // map<int,vector<lli>> mp;
    map<int, set<lli>> mp;
    // vector<lli>f{1,2,3};
    // mp[1] = f;
    
    for(i=1;i<=n;i++)
    {
       mp[i].insert(0);
    }
    for (i = 0; i < m; i++)
    {
        lli x, y;
        cin >> x >> y;
        mp[x].insert(y);
        mp[y].insert(x);
    }
   //  cout<<mp.size()<<" "<<endl;
    for (auto it : mp)
    {

        cout << it.second.size()-1 << " ";
        set<lli> s = it.second;
     
        // cout<<it.first<<" ";
        for (auto it1 : s)
        {
          if(it1 != 0)
          cout<<it1<<" ";
        
        }
        cout << endl;
    }
    // for(i=0;i<m;i++)
    // {
    //     mp.i
    // }

    //   map<int, int> gquiz1;

    // // insert elements in random order
    // gquiz1.insert(pair<int, int>(10, 40));
    // gquiz1.insert(pair<int, int>(2, 30));
    // gquiz1.insert(pair<int, int>(3, 60));
    // gquiz1.insert(pair<int, int>(4, 20));
    // gquiz1.insert(pair<int, int>(5, 50));
    // gquiz1.insert(pair<int, int>(6, 50));

    //  //gquiz1[7]=10;     // another way of inserting a value in a map

    // for(auto it : gquiz1)
    // {
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
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