#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,b;
    cin>>a>>b;
    double money;
    if(((int)a%5==0)&&(a<=b))
    {
        money = (double)a + (0.50);
        if(money<=b)
            cout<<setprecision(2)<<fixed<<(b-money);
        else
            cout<<setprecision(2)<<fixed<<b;
    }
    else
        cout<<setprecision(2)<<fixed<<b;
}
