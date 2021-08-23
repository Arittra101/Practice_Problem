
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli min(lli a,lli b,lli c)
{
    lli small=a;
    if(small>b)
      small = b;
    if(small>c)
        small =c;

    return small;

}


void solve()
{

    lli t;
    cin>>t;
    while(t--)
    {
        lli a,b;
        cin>>a>>b;
        if(a==0||b==0)
            cout<<0<<endl;
        else
        {

                cout<<min(a,b,(a+b)/3)<<endl;
        }

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

