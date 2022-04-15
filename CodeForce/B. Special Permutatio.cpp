
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
    lli n,sm=0,sm1=0,a,b;
    vi v1,v2;
    v1.pb(a);
    v2.pb(b);
    cin>>n>>a>>b;
    lli md  = n/2;

    if(a>b)
    {
        //  cout<<"F";
        if(a!=(md+1) || (b!=md))
        {
            //cout<<"F1";
            cout<<-1<<endl;
            return;
        }
    }
    if(a<=(md) && b<=(md) || (a>(md) && b>(md)))
    {
        cout<<"-1"<<endl;
        return;
    }




    if(n==2)
    {
        cout<<a<<" "<<b<<endl;
        return;

    }


    lli c=1;
    cout<<a<<" ";


    for(i=n; i>=1; i--)
    {

        if(a!=i && b!=i)
        {
            cout<<i<<" ";
            c++;
        }

        if(c==md) break;
    }
    cout<<b<<" ";
    c=1;
    for(i=1 ; i<=n; i++)
    {


        if(a!=i && b!=i)
        {
            cout<<i<<" ";
            c++;
        }

        if(c==md) break;
    }
    cout<<endl;




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


