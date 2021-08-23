#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(b<=a&&c<=a)
    {
        cout<<"Chocolate"<<endl;
    }
    else if(b>a&&c>a)
        cout<<"Chocolate"<<endl;

    else
    {

        if(b<=a)
            cout<<"Chocolate"<<endl;
        else
            cout<<"Ice-cream"<<endl;

    }

}


