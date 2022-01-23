
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
    lli a,b;
    cin>>a>>b;
    lli ml =a*b;
    string ans = to_string(ml);
    for(i=0; i<ans.size(); i++)
    {
        cout<<abs(ans[i]-'0')+1;
    }

}
void solve1()
{
    lli a,b;
    cin>>a>>b;
    vi v;
    lli ml =a*b;

    while(ml)
    {
        v.pb(ml%10);
        ml/=10;

    }
    reverse(v.begin(),v.end());
     for(auto it : v)
     cout<<it+1;


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve1();
    return 0;
}
