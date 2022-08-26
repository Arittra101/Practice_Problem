
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
    lli t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if((s[s.size()-1]-'0')%2==0)
            cout<<0<<endl;
        else if((s[0]%2==0))
        {
            cout<<1<<endl;
        }
        else
        {
            lli check = 1;
            for(i=1; i<s.size(); i++)
            {
                if((s[i]-'0')%2==0)
                {
                    check = 0;
                    cout<<2<<endl;
                    break;
                }
            }
            if(check) cout<<-1<<endl;
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
