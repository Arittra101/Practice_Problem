
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli i,j;



void solve()
{
    lli n,s1=1,s2=1;
    cin>>n;
    for(i=2;i<=n;i++)
    {
        s2+=i;
    }
    if(n==0)s2=0;
    cout<<s2;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
