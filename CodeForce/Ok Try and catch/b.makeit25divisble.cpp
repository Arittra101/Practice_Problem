
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

        char fv = '5',zr = '0',sv = '7',tw = '2';

        string n;
        cin>>n;
        lli trac=0,c=0,mn=INT_MAX;
        for(i=n.size()-1; i>=0; i--)
        {
            if(n[i]=='5' && trac ==0)
                trac = 1;

            else if(n[i]=='7' && trac == 1)
                break;
            else
            {
                c++;
            }
        }
        mn = min(mn,c);
        c=0;
        trac=0;
        for(i=n.size()-1; i>=0; i--)
        {
            if(n[i]=='0' && trac ==0)
                trac = 1;

            else if(n[i]=='5' && trac == 1)
                break;
            else
            {
                c++;
            }
        }
        mn = min(mn,c);
        c=0;
        trac=0;
        for(i=n.size()-1; i>=0; i--)
        {
            if(n[i]=='5' && trac ==0)
                trac = 1;

            else if(n[i]=='2' && trac == 1)
                break;
            else
            {
                c++;
            }
        }
        mn = min(mn,c);
        c=0;
        trac=0;
        for(i=n.size()-1; i>=0; i--)
        {
            if(n[i]=='0' && trac ==0)
                trac = 1;

            else if(n[i]=='0' && trac == 1)
                break;
            else
            {
                c++;
            }
        }
        mn = min(mn,c);
        c=0;
        trac=0;
        cout<<mn<<endl;




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
