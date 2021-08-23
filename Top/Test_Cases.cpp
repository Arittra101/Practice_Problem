#include<iostream>
using namespace std;

void work(int t,int c,int m)
{
    int a=0,dl,cl,ml;
    while(t--)
    {
        cin>>dl;
        cin>>cl;
        cin>>ml;
        if(cl>c&&(a==0))
        {
            a=1;

        }
        else if(ml>m&&(a==0))
        {
            a=2;

        }
        if(dl!=0&&(a==0))
        {
            a=3;
        }

    }
    if(a==0)cout<<"AC"<<endl;
    else if(a==1)cout<<"CLE"<<endl;
    else if(a==3)cout<<"WA"<<endl;
    else if(a==2)cout<<"MLE"<<endl;
}

int main()
{
    int t,c,m;
    cin>>t>>c>>m;
    work(t,c,m);
}
