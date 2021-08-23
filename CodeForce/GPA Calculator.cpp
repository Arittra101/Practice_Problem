#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

void solve()
{

  int t,c=0;
  cin>>t;
  while(t--)
  {
       c++;
       float t1;
       cin>>t1;
       float d =0.0,n;
       n = t1;
       while(t1--)
       {
           float d1;
           cin>>d1;
           d+=d1;
       }

       cout<<"Case "<<c<<": ";
        d/=n;
       printf("%0.3f\n",d);

  }

}
int main()
{

   // solve();
    printf("%0.3f\n",0.9999);
    return 0;
}

