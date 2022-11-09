#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli i, j, l = 0;

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

    string s, s1;
    cin >> s >> s1;
   
    j=0;i=0;
    cout << "Case #" << l << ": ";
    for(;i<s.size();)
    {
        for(;j<s1.size();)
        {   

            if(s[i]==s1[j])
            {
               // cout<<i<<endl;
                i++;
                j++;
                break;
          
            }
            j++;
            
        }
        if(j==s1.size()||i==s.size()) break;
    }
    if(i==s.size())
    {   
      //  cout<<i<<endl;
        cout<<s1.size()-s.size()<<endl;
       
    }
    else cout<<"IMPOSSIBLE"<<endl;
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    lli t;
    cin >> t;
    while (t--)
    {
        l++;

        solve();
    }
}