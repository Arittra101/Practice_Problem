
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

        lli n,k=0;
        cin>>n;
        i=1;
        while(1)
        {
            if(i%3!=0)
            {
                lli c = i%10;
                if(c!=3) k++;
            }
            if(k==n) break;
            i++;
        }
        cout<<i<<endl;
    }
}
int main()
{

    solve();
    return 0;
}


