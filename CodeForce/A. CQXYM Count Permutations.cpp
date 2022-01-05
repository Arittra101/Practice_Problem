

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli i,j;
lli mod = 1000000007;
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
    lli t;
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        lli fact=1;
        for(i=3;i<=2*n;i++)
        {
            fact*=i;
            fact%=mod;
        }
        cout<<fact<<endl;
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
