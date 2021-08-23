
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
        if(a>b)swap(a,b);
        if(b==a+1)cout<<-1<<endl;
        else{
            lli ch = abs(a-b);
            if(c<=ch*2)
            {
                lli ch1 = (c-ch);
                if(b>(ch*2))cout<<-1<<endl;
                else if(ch1<=0)
                    cout<<ch+c<<endl;
                else cout<<c-ch<<endl;
            }
            else cout<<-1<<endl;
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


