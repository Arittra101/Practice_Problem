
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
    lli sm=0;
    vi v(3);
    for(auto &i : v)
    {
        cin>>i;
        sm+=i;
    }
    SORT(v);

    if(v[0]== v[1] && (v[2]%2==0))
    {
        cout<<"Yes"<<endl;
        return;
    }
    else if(v[1]== v[2] && (v[0]%2==0))
    {

        cout<<"Yes"<<endl;
        return;
    }
    else if(v[0]+v[1]==v[2])
    {
        cout<<"Yes"<<endl;
        return;
    }
    cout<<"No"<<endl;

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


