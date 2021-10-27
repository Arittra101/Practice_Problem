
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
    lli t,cs=0;
    cin>>t;
    while(t--)
    {
        cs++;
        lli  b=0,w=0,t=0,a=0,k(0);
        lli n;
        string s;
        cin>>n>>s;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='B')
                b++;
            else if(s[i]=='W')
                w++;
            else if(s[i]=='T')
                t++;
            else a++;
        }
        cout<<"Case ";
        cout<<cs<<": ";

        if(a==n)cout<<"ABANDONED";
        else if(b==w)cout<<"DRAW "<<b<<' '<<t;
        else if(w+a==n)cout<<"WHITEWASH";
        else if(b+a==n)cout<<"BANGLAWASH";

        else if(b>w)cout<<"BANGLADESH "<<b<<" - "<<w;
        else if(b<w)cout<<"WWW "<<w<<" - "<<b;


        cout<<endl;

    }
}

int main()
{

    solve();
    return 0;
}
