

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
    vi v1,v2;
    lli sm=0,sm2=0;
    for(i=0; i<n; i++)
    {
        lli x;
        cin>>x;
        v1.pb(x);
    }
    for(i=0; i<n; i++)
    {
        lli x;
        cin>>x;
        v2.pb(x);
    }
    for(i=0;i<n;i++)
    {
        if(v1[i]>v2[i])swap(v1[i],v2[i]);

    }
//   for(i=0;i<n;i++)
//    {
//        cout<<v1[i]<<" ";
//    }
//    cout<<endl;
//      for(i=0;i<n;i++)
//    {
//        cout<<v2[i]<<" ";
//    }
//    cout<<endl;
    for(i=0;i<n-1;i++)
    {
        sm += abs(v1[i]-v1[i+1]);
         sm2 += abs(v2[i]-v2[i+1]);
        // cout<<sm<<" "<<sm2<<endl;
    }
    cout<<sm+sm2<<endl;

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

