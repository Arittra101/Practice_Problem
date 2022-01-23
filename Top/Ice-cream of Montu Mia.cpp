
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
    lli t,a,b,c;
    vi v;
    cin>>t;
    lli n  = 3;
    while(n--)
    {
        lli x;
        cin>>x;
        v.pb(x);
    }
    lli it = *min_element(v.begin(),v.end());

    lli chk = abs(it - t);
    if(chk>=10)
        cout<<"Yes :-D"<<endl;
    else cout<<"No :-("<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
