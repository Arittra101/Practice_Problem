
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


void solve(lli n)
{
    lli sm =0;
    if(n<10)
    {
        cout<<n<<endl;
        return;
    }
    while(1)
    {
        lli n1 = n%10;
        sm+=n1;
        n/=10;
        if(n==0)
        {
            n=sm;
            n1 = n/10;
            if(n1==0)break;
            sm=0;
        }
    }
    cout<<sm<<endl;


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli n;
    while(cin>>n)
    {
        if(n==0)break;
        solve(n);
    }

    return 0;
}

