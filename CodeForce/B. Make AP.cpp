
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
    lli n,sm=0,sm1=0;

    lli a,b,c;
    cin>>a>>b>>c;

    if((2*b-c)>0 && (2*b-c)%a==0)
    {
        cout<<"Yes"<<endl;
        return;
    }
   else if((2*b-a)>0 && (2*b-a)%c==0)
    {
        cout<<"Yes"<<endl;
        return;
    }
    else if((a+c)%(2*b)==0)
    {
        cout<<"Yes"<<endl;
        return;
    }
    cout<<"No"<<endl;
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


