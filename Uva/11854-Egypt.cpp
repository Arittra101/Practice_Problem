
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
    lli a,b,c;
    while(1)
    {
        cin>>a>>b>>c;
        if(a==0 && b==0 && c==0) break;
        else{
             vi v{a,b,c};
             SORT(v);
             lli a = pow(v[0],2)+pow(v[1],2);
             lli c = pow(v[2],2);
             if(a==c) cout<<"right"<<endl;
             else cout<<"wrong"<<endl;
        }


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
