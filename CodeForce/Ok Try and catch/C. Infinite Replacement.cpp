
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
    string s,t;
    cin>>s>>t;
    lli a=0,a1=0;
    for(i=0; i<t.size(); i++)
    {
        if(t[i]=='a')
            a1++;
    }
    if(a1>0 && t.size()>1)
    {
        cout<<-1<<endl;
        return;
    }
    else if(a1==1 && t.size()==1)
    {
        cout<<1<<endl;
        return;
    }
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='a')
        {
            a++;
        }
    }
    lli m = pow(2,a);
    cout<<m<<endl;

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


