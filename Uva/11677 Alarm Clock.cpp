
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
    lli h1,m1,h2,m2,h,m;

    while(1)
    {
        cin>>h1>>m1>>h2>>m2;
        if(h1==0 && h2==0 && m1==0 && m2==0) return;
        if(h1>h2 || (h1==h2 && (m1>m2)))
            {
                cout<<abs((h1*60+m1) - (h2*60+m2) - (24*60))<<endl;
            }
        else  cout<<abs((h1*60+m1) - (h2*60+m2))<<endl;


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
