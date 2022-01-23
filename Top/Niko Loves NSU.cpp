
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
    lli n1,c=0,n=0,s1=0,u=0;
    cin>>n1;
    string s;
    cin>>s;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='N')
            n++;
        else if(s[i]=='S')
            s1++;
        else if(s[i]=='U')
            u++;

    }

    vi v{n,s1,u};
    SORT(v);
    cout<<v[0];


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
