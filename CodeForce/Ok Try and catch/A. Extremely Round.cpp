
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
   

        lli x;
        cin>>x;
        lli cnt=9;
        if(x<10)cout<<x<<endl;
        else if(x<=100){
            
            cout<<cnt+(x/10)<<endl;
        }
        else if(x<=1000)
        {
            cout<<18+(x/100)<<endl;
        }
        else if(x<=10000)cout<<27+(x/1000)<<endl;
        else if(x<=100000) {
            cout<<36+(x/10000)<<endl;
        }
        else cout<<45+(x/100000)<<endl;

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
        solve();
    }

    return 0;
}


