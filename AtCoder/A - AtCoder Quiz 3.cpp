
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
    if(n>=42)
    {
        n+=1;
        lli k = log10(n)+1;
        if(k>=2) cout<<"AGC0"<<n;
    }
    else
    {
        lli k = log10(n)+1;

        if(k>=2)cout<<"AGC0"<<n;
        else   cout<<"AGC00"<<n;
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
