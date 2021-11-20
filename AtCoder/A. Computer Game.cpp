
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
        lli n,l=0;
        cin>>n;
        string s,s1;
        cin>>s>>s1;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1' && s1[i]=='1')
            {
                l=1;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(l==0) cout<<"YES"<<endl;

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
