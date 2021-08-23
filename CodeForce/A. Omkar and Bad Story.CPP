
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
//lli i,j;

#define pii  pair<lli, lli>
#define vi vector<lli>
#define pb push_back
#define mp make_pair
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define en "\n"



void solve()
{

    lli t;
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        vector<lli>v;
        vector<lli>:: iterator it;
        vector<lli>v1;
        lli c = 1;
        for(lli i=0; i<n; i++)
        {
            lli x;
            cin>>x;
            v.push_back(x);
            if(x<0)
                c=0;

        }
        if(c==0) cout<<"NO"<<endl;
        else if(c==1)
        {
            sort(v.begin(),v.end(),greater<int>());
            cout<<"YES"<<endl;
            cout<<v[0]+1<<endl;

            for(lli i=0;i<=v[0];i++)
                cout<<i<<" ";
            cout<<endl;
        }

    }

}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    // cout.tie(NULL);
    solve();
    return 0;
}

