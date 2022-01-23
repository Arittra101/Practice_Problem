
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

    lli a,b,c;
    cin>>a>>b>>c;
    vi v;
    v.pb(a);
    v.pb(b);
    v.pb(c);
    SORT(v);
    cout<<v[1]<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli t,c=0;
    cin>>t;
    while(t--)
    {
        c++;
        cout<<"Case "<<c<<": ";
        solve();

    }

    return 0;
}

