
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

// reverse binary -> lli res = 0; while(n>0){ res <<= 1; res = res(n & 1); n >>= 1;}
// decimal to binary string -> string s = bitset<N>(n).to_string();
// binary string to decimal -> lli n = bitset<N>(s).to_ullong();
// Case output -> cout << "Case " << j << ": " << mx << endl;

void solve()
{
    lli h1,h2,c=1;
    cin>>h1>>h2;
    vector<vector<lli>>v(h1,vector<lli>(h2,0));
    for(i=0; i<h1; i++)
    {
        for(j=0; j<h2; j++)
        {
            lli x;
            cin>>x;
            v[i][j]=x;

        }
    }
    for(i=0; i<h1-1; i++)
    {
        for(j=0; j<h2-1; j++)
        {
            if(v[i][j]+v[i+1][j+1]>v[i+1][j]+v[i][j+1])
            {
                c=0;
                break;
            }
        }
        if(c==0) break;
    }
    if(c) cout<<"Yes";
    else cout<<"No";
}
int main()
{

    solve();
    return 0;
}
