
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
    vi v,v1;
    lli n,tw=0,thr=0,mr=0;

    cin>>n;
    for(i=0; i<n; i++)
    {
        lli x;
        cin>>x;
        v.pb(x);
    }
    for(i=0; i<n-1; i++)
    {
        lli x = v[i+1]-v[i];
        v1.pb(x);
        if(x==2)tw++;
        else if(x==3)thr++;
        else if(x>3)mr++;
    }
    if(thr==1 && mr==0 && tw==0)cout<<"YES"<<endl;
    else if(tw<=2 && mr==0 && thr==0) cout<<"YES"<<endl;
    else if(thr==0 && mr==0 && tw==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;



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

