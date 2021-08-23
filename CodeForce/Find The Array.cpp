
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
//lli i,j;

#define pii  pair<lli, lli>
#define vi vector<lli>
#define pb push_back
#define mp make_pair
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define en "\n"




void solve()
{

    lli t;
    cin>>t;
    while(t--)
    {
       lli n;
       cin>>n;
       lli c=0,sum=0;
       for(lli i=0;;i++)
       {
           if(i%2!=0)
           {
               sum+=i;
               c++;
               if(n<=sum) break;
           }
       }
       cout<<c<<endl;
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

