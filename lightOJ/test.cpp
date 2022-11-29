

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

    string s,s1,s2;
    cin>>s;

    for(i=0; i<s.size(); i++)
    {
        char c =  s[i];
        s1.pb(c);
        s2.pb(c);
    }
    for(i=0; i<s1.size(); i++)
        cout<<s1[i];
    for(i=s2.size()-1; i>=0; i--)
        cout<<s2[i];
    cout<<endl;
}
int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
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


