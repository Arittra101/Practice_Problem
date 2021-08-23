#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int gcd(int a,int b)
{
    if(b==0)return a;
    else return gcd(b,a%b);
}

void solve()
{

    int n;
    cin>>n;
    while(n--)
    {
        int k;
        cin>>k;

        int a =100/gcd(100,k);
        cout<<a<<":"<<k/gcd(100,k)<<endl;
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
