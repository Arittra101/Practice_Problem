
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
   lli a,b;
   cin>>a>>b;
   if(a==1 && b==10){
    cout<<"Yes"<<endl;
    return;
   }
   a = abs(a-b);
   if(a==1)
    cout<<"Yes"<<endl;
   else cout<<"No"<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

        //cout<<"Case "<<l<<": ";
        solve();


    return 0;
}


