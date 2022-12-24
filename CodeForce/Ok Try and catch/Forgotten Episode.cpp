
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
    lli n;
    cin>>n;
    lli sm=0;
    for(i=0;i<n-1;i++)
    {
        lli x;
        cin>>x;
        sm+=x;
    }
    lli an = n*(n+1)/2;
    cout<<an-sm<<endl;

}
int main()
{
    solve();


    return 0;
}



