
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
    lli n,mn = 0;
    cin>>n;
    set<lli>s;


    for(i=0; i<n; i++)
    {
        lli x;
        cin>>x;
        s.insert(x);
    }

    lli tmp = 0,tmp1 = 0;
    mn = 0;
    //cout<<mn<<endl;
    for(auto it :  s)
    {
        if(it!=mn)
        {

            cout<<mn;
            cout<<endl;
            return;
        }
        mn++;
    }
    if(*s.begin()==0)cout<<mn;
    else
        cout<<0;
    cout<<endl;

     // while(ss.count(j))j++;

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


