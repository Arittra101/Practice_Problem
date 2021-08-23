#include<iostream>
#include<string>
using namespace std;
int main()
{
    long long int n1,n2,c=0,a,b;
    cin>>n1>>n2;

    while(n1!=0&&n2!=0)
    {
         a = n1%10;
         b=n2%10;

        n1=n1/10;
        n2=n2/10;

        if(a+b>9)
          {
              c=1;

              break;
          }

    }
    if(c==1)
        cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
