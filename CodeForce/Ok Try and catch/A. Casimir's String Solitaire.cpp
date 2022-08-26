
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli i,j;


void solve()
{
    lli t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        lli s1=0,l=0;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='B')
                s1++;
            else l++;


        }
        if(s1==l)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
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


