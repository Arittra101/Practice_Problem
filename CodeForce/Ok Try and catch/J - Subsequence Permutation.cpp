
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
    // comment ctrl + shift + c comment and x for move
   // lli n,sm=0,sm1=0;
   // cin>>n;
   // vi v(n);
   // for(auto &i : v) cin>>i;

   string s;
   lli n;
   cin>>n>>s;
   string s1 = s;
   SORT(s1);
   lli c=0;
   for(i=0;i<s.size();i++)
   {
       if(s[i]!=s1[i])c++;
   }
   cout<<c<<endl;
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


