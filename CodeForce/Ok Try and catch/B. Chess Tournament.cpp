
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
        lli n;
        string s;
        cin>>n>>s;
        vector<vector<char>>ans(n,vector<char>(n,'-1'));
        lli c=0;
        lli two=0,one;
        for(i=0;i<n;i++)
        {
            if(s[i]=='2')
              two++;
              else one++;
        }
        if(two>2 || two==0 && one>0)
        {
            cout<<"YES"<<endl;
            for(i=0;i<n;i++)
            {   c=0;
                for(j=i;j<n;j++)
                {
                    if(i==j)
                        ans[i][j]='X';

                    else if(s[j]=='1'|| s[i]=='1')
                    {
                         ans[i][j]='=';
                         ans[j][i]='=';
                    }

                    else if(s[j]=='2' && c<1)
                    {
                        ans[i][j]='+';
                        ans[j][i]='-';
                        c++;
                    }
                    else {
                          ans[i][j]='-';
                          ans[j][i]='+';
                    }


                }

            }

            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                      cout<<ans[i][j];

                }
                   cout<<endl;
            }
        }
        else
            cout<<"NO"<<endl;

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


