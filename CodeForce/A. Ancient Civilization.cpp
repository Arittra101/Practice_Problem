
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
    lli n,l,sm=0,sm1=0;
    cin>>n>>l;
    vector<lli>v(n);
    for(auto &i : v) cin>>i;
    map<lli,lli>one,zero;


    for(i=0; i<n; i++)
    {

        for(j=0; j<l; j++)
        {

            if((v[i]&1)) one[j]++;
            else zero[j]++;

            v[i] = (v[i]>>1);

        }
    }
    for(i=0; i<l; i++)
    {
        if(one[i]>zero[i])
            sm+=pow(2,i);
    }
    cout<<sm<<endl;
}
int main()
{

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


