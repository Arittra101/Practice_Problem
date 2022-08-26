
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
    lli t;
    cin>>t;
    while(t--)
    {
        lli n=7;

        vi v;
        while(n--)
        {
            lli x;
            cin>>x;
            v.pb(x);
        }

        lli sum = v[v.size()-1],k;
        lli sum1 = v[0]+v[1]+v[2];
        lli sum2 = v[0]+v[1]+v[3];
        if(sum1==sum)
            k = v[2];
        else k =  v[3];

        cout<<v[0]<<" "<<v[1]<<" "<<k<<endl;
    }
}
void solve2()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n = 7;
        vi v;
        while(n--)
        {
            lli x;
            cin>>x;
            v.pb(x);
        }
        cout<<v[0]<<" "<<v[1]<<" "<<v[6]-v[0]-v[1]<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve2();
    return 0;
}
