
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
   string s;
   cin>>s;
   lli bf =  s[0]-'a';
   string af="abcdefghijklmnopqrstuvwxyz";
   //cout<<af[2]<<endl;
   bf = bf * 25;
  // cout<<bf<<endl;
   for(i=0;i<26;i++)
   {
       if(s[1]==af[i])
       {
           bf++;
           break;
       }
       else if(s[0]!=af[i])
       {
           bf++;
          // cout<<s[0]<<" "<<af[i]<<endl;

       }
   }
   cout<<bf<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli t,l=0;
    cin>>t;
    while(t--)
    {
        l++;
        //cout<<"Case "<<l<<": ";
        solve();
    }

    return 0;
}


