

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
    lli l,r,k,e,o;
    cin>>l>>r>>k;

    lli md = (r-l)/2;

    if(l==r)
    {
        if(l>1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        return;
    }
    else if(l%2==0 && r%2==0)
    {

        e = md+1,o = md;
    }
    else if(l%2!=0 && r%2!=0)
    {
        e = md, o =md+1;
    }
    else
    {
        e = md+1,o =md+1;
    }


    if(k>=o)
    {
         cout<<"YES"<<endl;


    }
    else
    {

        cout<<"NO"<<endl;

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

