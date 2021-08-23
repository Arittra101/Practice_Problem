#include<iostream>
using namespace std;
int main()
{
    long long int n,i=0,j,s1=0,s2=0;
    cin>>n;

    for(i=2;i<=n;i+=2)
    {
        s1++;
    }
    if(n%2==0)
        cout<<s1;
    else
        cout<<s1+1;
}
