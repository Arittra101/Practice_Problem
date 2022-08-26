
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
    lli n,sm=0,sm1=0;
    cin>>n;
    vi v(n);
    lli pos;
    for(auto &i : v) cin>>i;
    lli temp=1;
    for(i=0; i<n; i++)
    {
        if(v[i]!=(i+1) && (temp))
        {
            //cout<<"F";
            auto it = find(v.begin()+i,v.end(),(i+1));
            pos = it-v.begin();

            for(j=pos; j>=i; j--)
            {
                cout<<v[j]<<" ";
            }
            temp=0;
            i=pos+1;
            if(i==n) return;

        }

        cout<<v[i]<<" ";
    }


    cout<<endl;
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


