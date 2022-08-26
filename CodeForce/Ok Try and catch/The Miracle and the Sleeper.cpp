
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli i,j;


void solve()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli a,b;
        cin>>a>>b;
        if(a>b) swap(a,b);
        lli ans = (b/2) + 1 ;
        if(ans<a) cout<<abs(a -  b)<<endl;
        else cout<<abs(ans - b)<<endl;
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


