
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
        string s,s1;
        cin>>s>>s1;
        lli sub = 0,sum=0,in,pb=0;
        for(i=0;i<s1.size();i++)
        {
            for(j=0;j<s.size();j++)
            {
                if(s1[i]==s[j])
                {
                    in = j+1;
                    break;
                }
            }
            if(i!=0)
            sub = abs(pb-in);
           // cout<<sub<<" ";
            pb = in;
            sum+=sub;

        }
        cout<<sum<<endl;

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
