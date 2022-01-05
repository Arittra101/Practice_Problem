
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
    string s;
    cin>>s;
    lli flag = 0;
    for(string T : {"xox","oxx","xxo"})
    {
        bool ok = true;
       for(i=0;i<s.size();i++)
       {
           if(T[i%3]!=s[i])
           {
               ok = false;
           }
       }
       if(ok)
       {
           cout<<"Yes"<<endl;
           exit(0);
       }
    }
    cout<<"No";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
