
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

void solve()
{

    multiset<int>n;
    multiset<int>:: iterator it;
    int a,b,c;
    cin>>a>>b>>c;
    n.insert(a);
    n.insert(b);
    n.insert(c);

    it = n.begin();
    a = *it;
    it++;
    b = *it;
    it++;
    c = *it;

    if((c-b)==(b-a))
        cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}

