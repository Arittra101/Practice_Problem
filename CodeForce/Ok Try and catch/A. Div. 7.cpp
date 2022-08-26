
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
    if(n%7==0)cout<<n<<endl;
    else{
        lli n1 = n/7;
        n1*=7;

        lli n2 = n1+7;

        lli c = n%100;
        c = c/10;

        lli c1 = n1%100;
        c1 = c1/10;
        if(c==c1)cout<<n1<<endl;
        else cout<<n2<<endl;

        //cout<<n1<<endl;
    }

}
void solve1()
{
    lli n;
    cin>>n;

    lli x = n%7;
    lli y = n%10;

    if(x<=y) cout<<n-x<<endl;
    else{
        cout<<n+(7-x)<<endl;
    }





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
        //cout<<"Case "<<l<<": ";
        solve1();
    }

    return 0;
}


