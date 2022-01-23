

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
    string s;
    cin>>s;
    lli b=0;
    for(i=4; i<7; i++)
    {
        lli a = s[i]-'0';
        b = b*10 + a;
    }
    //cout<<b<<endl;
    if(b==115)
        cout<<"CSE ";
    else  if(b==141)
        cout<<"EEE ";
    else if(b==116)
        cout<<"BBA ";
    else if(b==117)
        cout<<"LLB ";
    else if(b==114)
        cout<<"English ";
    else if(b==111)
        cout<<"Economics ";

    if(s[2]=='1')cout<<"Spring ";
    else  if(s[2]=='2')cout<<"Summer ";
    else cout<<"Autumn ";
    cout<<"20"<<s[0]<<s[1]<<endl;



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
