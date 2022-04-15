
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
    // lli n,sm=0,sm1=0;
    // cin>>n;
    // vi v(n);
    // for(auto &i : v) cin>>i;
    lli n,cnt=1,sm=0;
    cin>>n;
    vi v(n);
    for(auto &i :v) cin>>i;
    for(i=n-2;i>=0;i--)
    {
        if(v[i+1]==v[i])  cnt++;
        else break;
    }

    //cout<<"pre->i "<<i<<endl;
    while(i>=0)
    {
        sm++;
        i-=cnt;
      //  cout<<"now->i "<<i<<endl;
        cnt*=2;
        while(i>=0 && v[i]==v[n-1]) i--,cnt++;


    }
    cout<<sm<<endl;



}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli t,l=0;
    cin>>t;
    while(t--)
    {
        l++;
        //cout<<"Case "<<l<<": ";
        solve();
    }

    return 0;
}


