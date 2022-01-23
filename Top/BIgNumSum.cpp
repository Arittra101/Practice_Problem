
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
    string a,b;
    cin>>a>>b;
    vector<char>v;
    lli c=0;
    for(i=a.size()-1; i>=0; i--)
    {

        lli sm = (a[i]-'0')+(b[i]-'0');
        //cout<<sm;

        if(c>0)sm+=1;

        if(sm>10) c=1;
        else c=0;


        lli sm1 =  sm%10;
        sm1+=48;
       // cout<<sm1<<endl;
        char sm2 = (char)(sm1);
         cout<<sm2<<endl;
        v.pb(sm2);

    }
    if(c>0)
        v.pb('1');
   // for(i=v.size()-1; i>=0; i--)
       // cout<<v[i];


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
