
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
    for(i=0;i<n;i++)
    {
        lli x;
        cin>>x;
        v.pb(x);
    }
    R_SORT(v);
    i=0;
    j=n-1;
    lli mxc=1,mnc=1;
    lli mxv = v[i],mnv=v[j];
    while(i<j)
    {

        if(mnv<mxv)
        {
            j--;
            mnc++;
            mnv+=v[j];
        }
        else if(mxv<=mnv){
            i++;
            mxc++;
            mxv+=v[i];

        }
 //cout<<mxv<<" "<<mnv<<" "<<mxc<<" "<<mnc<<endl;
        if(mxv>mnv && mxc<mnc) {
            cout<<"YES"<<endl;
            return;
        }
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



