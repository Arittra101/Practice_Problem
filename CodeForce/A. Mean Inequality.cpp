
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

// reverse binary -> lli res = 0; while(n>0){ res <<= 1; res = res(n & 1); n >>= 1;}
// decimal to binary string -> string s = bitset<N>(n).to_string();
// binary string to decimal -> lli n = bitset<N>(s).to_ullong();
// Case output -> cout << "Case " << j << ": " << mx << endl;

void solve2()
{
    lli t;
    cin>>t;
    while(t--)
    {

        lli n,x;
        cin>>n;
        vector<lli>a;
        for(lli i = 0; i<n*2; i++)
        {
            cin>>x;
            a.push_back(x);
        }
        x= n*2-1;
        sort(a.begin(),a.end());

        for(lli i=0;i<n;i++)
        {
            cout<<a[i]<<" "<<a[x--]<<" ";
        }
        cout<<endl;
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve2();
    return 0;
}

