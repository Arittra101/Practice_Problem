#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,t1;
    cin>>t>>t1;
    char a[t][t1];
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<t1;j++)
        {
            scanf("%c",&a[i][j]);
        }
    }
    int c=0;
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<t1;j++)
        {
            if(a[i][j+1]=='*'||a[i][j-1]=='*'||a[i+1][j]=='*'||a[i-1][j]=='*')
            {

            }
            else
                c++;
        }
    }
        cout<<c;

}
