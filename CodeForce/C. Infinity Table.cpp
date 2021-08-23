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
        lli n,r,c;
        cin>>n;
        lli s = sqrt(n);
        if((s*s)==n) cout<<s<<" "<<1<<endl;
        else
        {
            lli s1 = s*s+1,l=1,flag=0;
            r=1;
            c=1;
            while(l<=s+1)
            {
                if(n==s1)
                {
                    cout<<r<<" "<<s+1<<endl;
                    flag=1;
                    break;
                }
                r++;
                l++;
                s1++;
            }
            if(flag==0)
                cout<<s+1<<" "<<(((s+1)*(s+1))-n)+1<<endl;
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


