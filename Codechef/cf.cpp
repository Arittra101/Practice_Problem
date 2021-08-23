#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int l,k,c=0;
        cin>>l>>k;
        while(l<=k)
        {
          c = c+((k-l)+1);
          l++;
        }
        cout<<c<<endl;
    }

}
