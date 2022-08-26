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
#define en "\n"
#define nd cout<<endl;
void solve()
{
    lli n,m,flag=0;
    cin>>n>>m;
    vi v;
    vi :: iterator it;
    for(i=n; i<=m; i++)
    {
        flag = 0;
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)v.pb(i);
    }
    it = find(v.begin(),v.end(),n);
    it++;
    if(*it==m)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}

