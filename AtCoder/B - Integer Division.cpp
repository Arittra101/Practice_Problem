
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
    lli md = n/10;
    if(md==0 && n>0)cout<<0;
    else if(md==0 && n<0)cout<<-1;

    else if(n<0)
    {
        lli md1 = n%10;
       // cout<<md1;
        if(0>md1) cout<<md-1;
        else cout<<md;

    }
    else
    {
        lli md1 = n%10;


        cout<<md;
    }
   // cout<<endl;
}
int main()
{
   // ios_base::sync_with_stdio(false);
   // cin.tie(NULL);
    //cout.tie(NULL);
    lli t,l=0;
  //  cin>>t;
   // while(t--)
   // {
      //  l++;
        //cout<<"Case "<<l<<": ";
        solve();
   // }

    return 0;
}

