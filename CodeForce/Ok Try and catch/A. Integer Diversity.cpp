
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
    vi v;
    while(n--)
    {
        lli x;
        cin>>x;
        if(x<0)  x*=(-1);
        v.pb(x);
    }
    n = v.size();
    SORT(v);
    lli f=0,sm=1;
    for(i=1; i<n; i++)
    {
        if(v[i]!=0)
        {
            if(v[i]==v[i-1] && f==0)
            {
                f=1;
                sm++;
            }
            else if(v[i]!=v[i-1])
            {
                f = 0;
                sm++;
            }
        }

    }
    //cout<<"D";
    cout<<sm<<endl;
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

