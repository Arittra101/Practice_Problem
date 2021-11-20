
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli i,j;

#define pii  pair<lli, lli>
#define vi vector<lli>
#define pb push_back
#define mp make_pair
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define SORT(v) sort(v.begin(),v.end());
#define R_SORT(v) sort(v.begin(),v.end(),greater<lli>());
#define en "\n"


void solve()
{
    lli n;
    cin>>n;
    lli x,y,a,b;

    vector<lli>v(n+1,0);


    lli l=0;
    lli mx  = INT_MIN;
    for(i=0;i<n-1;i++)
    {
          cin>>x>>y;
          v[x]++;
          v[y]++;

    }
   // for(auto it : v)
     //   cout<<it<<" ";
    lli c = *max_element(v.begin(),v.end());
    if(c+1>=n)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
