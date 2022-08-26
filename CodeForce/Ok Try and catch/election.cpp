
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

bool cmp(const pii &v1, const pii &v2)
{
    return (v1.second + v1.first*10)/v1.first < (v2.second + v2.first*10)/v2.first;
}
void solve()N
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli a,b,c;
        cin>>a>>b>>c;
        vector<lli>v;
        v.pb(a);
        v.pb(b);
        v.pb(c);
        for(i=0; i<3; i++)
        {
            lli value = 0,mx=0;
            for(j=0; j<3; j++)
            {
                if(j!=i)
                {
                    if(v[i]<=v[j])
                    {
                        value = abs(v[i]-v[j])+1;
                        mx = max(mx,value);
                    }
                }
            }
            cout<<mx<<" ";
        }
        cout<<endl;
    }
}
void solve2()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli a,b,c,mxa,mxb,mxc;
        cin>>a>>b>>c;
        mxa = max (b,c);
        mxb = max(a,c);
        mxc = max(a,b);

        if(a>mxa)cout<<abs(a-mxa)+1<<" ";
        else cout<<0<<" ";
        if(b>mxb)cout<<abs(b-mxb)+1<<" ";
        else cout<<0<<" ";
        if(c>mxc)cout<<abs(c-mxc)+1<<" ";
        else cout<<0<<" ";

        cout<<endl;

    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
