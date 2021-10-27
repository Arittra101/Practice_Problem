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
    vector<lli>v{3,4,6,5,8,5};
    lli s = 1e6+2;
    vector<lli>idx(s,-1);
    lli minidx = INT_MAX;
    for(int i=0; i<v.size(); i++)
    {

        if(idx[v[i]]!=-1)
        {
            minidx = min(minidx,idx[v[i]]);
        }
        else
            idx[v[i]] = i;
        // minidx =
    }
    cout<<minidx+1;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}

