\
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
#define val 1000000000


void solve()
{

    lli n,t=0,ml = 1;
    cin>>n;
    vi v;
    while(t<n)
    {

        if(ml>val)
        {
            cout<<"NO"<<endl;
            return;
        }
        t++;
        v.pb(ml);
        ml =  ml *3;


    }
    cout<<"YES"<<endl;
    for(i=0;i<v.size();i++)
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
      //  cout<<endl;
    }

    return 0;
}


