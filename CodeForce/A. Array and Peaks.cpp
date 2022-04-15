
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
    lli n,k,c=0;
    cin>>n>>k;
    vi v,v1;
    lli n1 = n/2;
    if(n%2==0) n1-=1;
    if(k>n1)
    {
        cout<<-1<<endl;
        return;

    }
    v.pb(1);
    for(i=1; i<n; i++)
    {

        if(c>k || k==0)
        {
            //cout<<i+1;
            v.pb(i+1);
        }
        else  if(i%2!=0)
        {
            lli x = (i+1)+1;
            v.pb(x);
            // cout<<x;
            c++;
        }
        else if(i%2==0)
        {
            if(c==k) c++;
            lli x = (i+1)-1;
            // cout<<x;
            v.pb(x);
        }
    }
    for(i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
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

