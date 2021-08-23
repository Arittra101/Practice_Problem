#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int c = b%a;
    int d =b/a;
    if(c>0)
    {
        d++;
        int e = (d*a)-b;
        cout<<e<<endl;
    }
    else
        cout<<c<<endl;
}
