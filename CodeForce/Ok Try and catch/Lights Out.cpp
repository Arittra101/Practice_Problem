#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli i,j;
void solve()
{
    lli a[3][3];
    lli init[3][3];
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>init[i][j];
            a[i][j]=1;
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(init[i][j]%2!=0)
            {
                if(a[i][j]==1)a[i][j]=0;
                else a[i][j]=1;
                if(j+1<=2)
                {
                    lli x = j+1;
                    if(a[i][x]==1)a[i][x]=0;
                    else a[i][x]=1;
                }
                if(i+1<=2)
                {
                    lli x = i+1;
                    if(a[x][j]==1)a[x][j]=0;
                    else a[x][j]=1;
                }
                if(i-1>=0)
                {
                    lli x = i-1;
                    if(a[x][j]==1)a[x][j]=0;
                    else a[x][j]=1;
                }
                if(j-1>=0)
                {
                    lli x = j-1;
                    if(a[i][x]==1)a[i][x]=0;
                    else a[i][x]=1;
                }
            }
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   // solve();
   cout<<INT_MAX;
    return 0;
}

