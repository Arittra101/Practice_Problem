
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;



void solve()
{

  lli t;
  cin>>t;
  while(t--)
  {
      lli a,b,c,d,w1,w2;
      cin>>a>>b>>c>>d;
      vector<int>v;
      vector<int>::  iterator it,it1;
      v.push_back(a);
      v.push_back(b);
      v.push_back(c);
      v.push_back(d);
      sort(v.begin(),v.end(),greater<int>());
      if(a>b) w1 = a;
      else w1=b;
      if(c>d) w2 = c;
      else w2 = d;

      it = find(v.begin(),v.end(),w1);
      lli in1 = abs(v.begin()-it);
      it1 = find(v.begin(),v.end(),w2);
      lli in2 = abs(v.begin()-it1);

      if((in1==0||in1==1)&&(in2==0||in2==1))
        cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
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

