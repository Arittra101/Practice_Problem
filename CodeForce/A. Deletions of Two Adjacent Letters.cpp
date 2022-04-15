
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
    char c;
    string s;
    cin>>s>>c;

    lli flg = 0;
    for(i=0; i<s.size(); i++)
    {
        if(c==s[i])
        {
            lli fpos = i - 0;
            lli lpos = (s.size()-i)-1;
            if(fpos%2==0 && lpos%2==0)
            {
                cout<<"Yes"<<endl;
                return;

            }
        }

    }
    cout<<"No"<<endl;
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


