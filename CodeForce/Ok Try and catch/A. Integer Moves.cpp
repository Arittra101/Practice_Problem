
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
    lli a,b,rs;
    cin>>a>>b;
    if(a==0 && b==0)
    {
        cout<<0<<endl;
        return;
    }
    else
    {
        a  = a*a;
        b = b*b;
        rs =  a+b;
        lli rs1 = sqrt(rs);
        if(rs1*rs1 == rs)
        {
            cout<<1<<endl;
            return;
        }
        cout<<2<<endl;
        return;
    }
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


