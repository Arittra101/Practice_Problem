
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
//lli i,j;


void solve()
{

  lli t;
  cin>>t;
  while(t--)
  {
      lli n,sum=0,c=0;
      cin>>n;
      vector<lli>v;
      for(lli i=0;i<n;i++)
      {
          lli x;
          cin>>x;
          sum+=x;
          v.push_back(x);
      }

      if(sum%n!=0)cout<<-1<<endl;
      else{
            lli avg = sum/n;
            sort(v.begin(),v.end(),greater<>());
            for(auto it:v)
            {
                if(it<=avg)
                    break;
                c++;
            }
            cout<<c<<endl;
      }
  }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}

