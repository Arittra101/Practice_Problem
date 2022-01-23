
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
    lli a,b;

    while(1)
    {
        cin>>a>>b;
        lli c=0;
        vi v;
        if(a==0 && b==0) break;
        else {
            lli mx = max(a,b);
            lli mn = min(a,b);
            for(i=1;i<=1000;i++)
            {
                lli sqrt = i*i;
                v.pb(sqrt);
            }
            for(i=0;i<v.size();i++)
            {
                if(v[i]>=mn && v[i]<=mx)
                    c++;
                else if(v[i]>mx) break;
            }

        }
        cout<<c<<endl;
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
