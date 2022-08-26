#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
vector<lli>v[100];
lli i,j;
#define pb push_back
void solve()
{
    lli t,k=0,k1=1,k2=2,s=0,s1=0,s2=0;
    cin>>t;
    for(i=0; i<t; i++)
    {
        lli x,y,z;
        cin>>x>>y>>z;
        v[i].pb(x);
        v[i].pb(y);
        v[i].pb(z);

        s +=v[i][k];
        s1 +=v[i][k1];
        s2 +=v[i][k2];
    }
    if(s==0&&s1==0&&s2==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
