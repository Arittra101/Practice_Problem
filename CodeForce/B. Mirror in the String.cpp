
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
        lli n;
        cin>>n;
        string s;
        cin>>s;
        lli c=1;

        for(i=0; i<s.size()-1; i++)
        {
            if(s[i]>=s[i+1])
                c++;
            else break;

        }
        if(s[0]==s[1])
        {
            c=-1;
            cout<<s[0]<<s[0];
        }

        for(i=0; i<c; i++)
            cout<<s[i];
        for(i=c-1; i>=0; i--)
            cout<<s[i];
        cout<<endl;

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
