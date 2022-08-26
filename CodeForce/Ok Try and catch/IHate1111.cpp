#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        if(n%11==0||n%111==0)cout<<"YES"<<endl;
        else {
            if(n<111)
            {
                if(n%11==0)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else {
                //lli m =  n/111;
                lli m = n%111;

                if(m%11==0)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;

            }
        }
    }
}
