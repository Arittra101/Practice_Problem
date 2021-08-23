#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli i,j;

void solve()
{

  lli n;
  cin>>n;
  lli c=0;
  for(i=2;i<n;i++)
  {
      if(n%i==0){
        c=1;
        break;
      }
  }
  if(c==0)
    cout<<"NO PUNISHMENT";
  else
  {
      while(n--)
          cout<<"I DID NOT DO THE ASSIGNMENT."<<endl;
  }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   // solve();
   int a=5,b=6,c;
c= a&b;
   cout<<c;
  // printf("%17.3f",7/2+5);
    return 0;
}
