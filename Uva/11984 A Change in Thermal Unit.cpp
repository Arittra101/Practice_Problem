
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


void solve(int l)
{
    double c,d,f;
    cin>>c>>d;
    f = (9.0/5.0) * c +32;
    c = ((d+f)-32)*(5.0/9.0);

    printf("Case %d: %0.2lf\n",l,c);


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli t,l=0;
    cin>>t;
    while(t--)
    {
        l++;
       // cout<<"Case "<<l<<": ";
        solve(l);
    }

    return 0;
}

