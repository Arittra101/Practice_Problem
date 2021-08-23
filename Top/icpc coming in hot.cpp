#include<iostream>
using namespace std;
int main()
{
    long long int  d=0,c,n,a;
     cin>>n;
     long long int
//    a=(string)n;
    while(n!=0)
    {

    }
    cin>>n;
    for(int i=0;i<n.size();i++)
    {
        for(int j=i+1;i<n.size();j++)
        {
            if(n[i]==n[j])
            {
                c++;
            }
        }
        if(c>d)
        {
            a=n[i];
            d=c;
        }
        else if(c==d)
        {
            if(n[i]<a)
            {
                a=n[i];
                d=c;
            }
        }
    }
    cout<<"d";

}
