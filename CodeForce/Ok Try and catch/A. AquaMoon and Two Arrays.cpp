
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
    cin>>n;
    vi a(n);
    vi b(n);
    for(auto &i : a) cin>>i;
    for(auto &i : b) cin>>i;

    vi vi1,vj;
    for(i=0; i<n; i++)
    {
        if(a[i]<b[i])
        {
            lli ds = b[i]-a[i];
            while(ds--) vj.pb(i);
        }
        else
        {
            lli ds = a[i]-b[i];
            while(ds--)vi1.pb(i);
        }
    }

    if(vi1.size()!=vj.size())
    {
        cout<<-1<<endl;
        return;
    }
    else
    {
        lli sz = vi1.size()+vj.size();
        cout<<sz/2<<endl;
        for(i=0; i<(sz/2); i++)
            cout<<vi1[i]+1<<" "<<vj[i]+1<<endl;
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


