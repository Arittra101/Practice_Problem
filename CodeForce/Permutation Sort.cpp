
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>v;
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            int k;
            cin>>k;
            v.push_back(k);
        }
        int max  = *max_element(v.begin(),v.end());
        int min  = *min_element(v.begin(),v.end());

        if(max==v[0]&&min==v[n-1]) cout<<3<<endl;

        else if(max==v[n-1]&&min==v[0])
        {
            if(is_sorted(v.begin(),v.end()))
                cout<<0<<endl;
            else cout<<1<<endl;
        }
        else if(max==v[0]||min==v[n-1]) cout<<2<<endl;
        else if(min==v[0]||max == v[n-1]) cout<<1<<endl;
        else
        cout<<2<<endl;
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

