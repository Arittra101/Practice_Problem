
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
    lli n,m,k;
    cin>>n>>m>>k;

    string s,s1;
    cin>>s>>s1;
    SORT(s); SORT(s1);

    if(s>s1) swap(s,s1);
    lli sz = s.size();



    vector<char>v;
    i = 0,j = 0;
    lli sfg=0,s1fg=0;
   // cout<<s<<" "<<s1<<endl;
    while(i<sz && j<s1.size())
    {
        if(s[i]<s1[j])
        {
            //cout<<s[i];
            //cout<<sfg<<" "<<k<<endl;
            if(sfg<k)
            {
               // cout<<s[i];
                sfg++;
                s1fg=0;

                v.pb(s[i]);
                i++;

            }
            else
            {
                sfg=0;
                s1fg++;

                v.pb(s1[j]);
                 j++;

            }
        }
        else if(s1[j]<s[i])
        {
            if(s1fg<k)
            {
                s1fg++;
                sfg=0;

                v.pb(s1[j]);
                 j++;
            }
            else
            {
                sfg++;
                s1fg = 0;
                v.pb(s[i]);
                i++;
            }

        }
        // cout<<i<<" ";
        //if(i==3) break;
    }
    for(auto it : v)cout<<it;
    cout<<endl;

}

int main()
{

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



