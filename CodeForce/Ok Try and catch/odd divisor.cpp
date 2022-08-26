#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,f=0;
        cin>>a;
        if(a==2)
            cout<<"NO"<<endl;
        else if(a%2==0)
        {
            //a=a/2;

            if(a%2!=0)
                cout<<"YES"<<endl;
            else
            {
                while(1)
                {
                    if(a==2) break;
                    a=a/2;
                    if(a%2!=0&&a>1)
                    {
                        cout<<"YES"<<endl;
                        f=1;
                        break;
                    }

                }

                if(f==0)
                    cout<<"NO"<<endl;
            }

        }
        else
        {
            cout<<"YES"<<endl;
        }

    }
}

