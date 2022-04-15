

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


void solve2()
{
    lli n,sm=0,sm1=0;
    lli mxM,mxP,mx1=INT_MIN,mx2=INT_MIN;
    cin>>n;
    vi v(n);
    for(auto &i : v) cin>>i;
    auto it = max_element(v.begin(),v.end());

    lli pos = it-v.begin();
    mxM = pos;
    mxP = pos;

    mxM--;
    if(mxM>=0){
        mx1 = v[mxM]* (*it);
        //cout<<*it<<"s "<<mx1<<endl;
    }
    mxP++;
     if(mxP<n){
        mx2 = v[mxP]* (*it);
       // cout<<*it<<" "<<mx2<<endl;
    }
    cout<<max(mx1,mx2)<<endl;



}
void solve()
{
    lli n,sm=0,sm1=0;
    lli mxM,mxP,mx1=INT_MIN,mx2=INT_MIN;
    cin>>n;
    vi v(n);
    for(auto &i : v) cin>>i;

    lli mx = INT_MIN;
    for(i=0;i<n-1;i++)
    {
        lli x = v[i]*v[i+1];
        mx  = max(x,mx);
    }
    cout<<mx<<endl;



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

