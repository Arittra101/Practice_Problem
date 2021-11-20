

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
        lli a,b,c;
        cin>>a>>b>>c;
        if(((a+c)-2*b)%3==0)cout<<0<<endl;
        else cout<<1<<endl;


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
