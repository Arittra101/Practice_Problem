
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
        v.pb(x);
    }
    n = v.size();
    lli a =0,b=0,cnt=0;

    for(i=0; i<n; i++)
    {
        if(v[i]>0)
        {
            cnt++;
            if(cnt%2!=0) a++;
            else b++;

        }
    }
    //cout<<a<<" "<<b<<endl;
    if(a>b)cout<<"Alice"<<endl;
    else cout<<"Bob"<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
