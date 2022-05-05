
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

    lli t=25;
    lli l=0,r=1000000;
    while(t--)
    {
        string x;
        cin>>x;
        lli md = (l+r)/2;

        if(x=="Bingo!")
        {
            break;
        }
        else if(x=="Bigger")
        {
            l = md+1;
            cout<<md<<endl;
        }
        else if(x=="Smaller")
        {
            r=md-1;
            cout<<md<<endl;
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


