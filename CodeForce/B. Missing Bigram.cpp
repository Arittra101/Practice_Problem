
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
        lli n;
        cin>>n;

        vector<string>v;
        n -=2;
        while(n--)
        {
            string x;
            cin>>x;
            v.pb(x);
        }
        lli n1 = v.size();
        cout<<v[0];
        bool flag = true;
        for(i=1; i<n1; i++)
        {
           if(v[i][0]!=v[i-1][1])
           {
               flag = false;
               cout<<v[i];
           }
           else cout<<v[i][1];
        }
        if(flag) cout<<"a";
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
