
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
//lli i,j;



void solve()
{

    int t;
    cin>>t;
    while(t--)
    {

        int n,k,i,sum=0,r2,check=1;
        cin>>n>>k;
        int r1 = k/2;
        r2=r1+(n-k);
        cout<<r2<<endl;
        i = abs(k-r1);
        if(k==1)i=2;
            for(; i<=n; i++)
            {
                if(i!=k)
                {
                    cout<<i<<" ";
                }
            }
        cout<<endl;


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

