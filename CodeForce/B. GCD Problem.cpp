
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
    lli n;
    cin>>n;
    if(n%2==0) cout<<"2 "<<(n-3)<<" "<<1<<endl;
    else {

        lli n1 = n/2;
        if(n1%2==0)
        {
            cout<<n1-1<<" "<<n1+1<<" "<<1<<endl;
        }
        else cout<<(n1-2)<<" "<<(n1+2)<<" "<<1<<endl;

    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli t;
    cin>>t;
    while(t--)
    {
       solve();
    }

    return 0;
}

