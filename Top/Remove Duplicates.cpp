
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
//lli i,j;

#define pii  pair<lli, lli>
#define vi vector<lli>
#define pb push_back
#define mp make_pair
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define en "\n"

// reverse binary -> lli res = 0; while(n>0){ res <<= 1; res = res(n & 1); n >>= 1;}
// decimal to binary string -> string s = bitset<N>(n).to_string();
// binary string to decimal -> lli n = bitset<N>(s).to_ullong();
// Case output -> cout << "Case " << j << ": " << mx << endl;


void solve()
{
    int t;
    cin>>t;
    int c=0;
    while(t--)
    {
        c++;
        string s;
        cin>>s;
        vector<pair<char,int>>v;
        cout<<"Case #"<<c<<":"<<endl;
        for(int i=0; i<s.size(); i++)
        {
            int check=0;
            for(int j=0; j<v.size(); j++)
            {
                if(s[i]==v[j].first)
                {
                    check=1;
                    v[j].second+=1;
                    break;
                }
            }
            if(check==0)
                v.push_back(make_pair(s[i],1));

        }
        for(auto it : v)
        {
            cout<<it.first<<" "<<it.second<<endl;
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

