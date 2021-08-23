
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

    vector<lli>v;
    vector<lli>:: iterator it;


    lli n,q;
    cin>>n>>q;

    lli a[q];
    while(n--)
    {
        int x;
        cin>>x;
        v.push_back(x);

    }
    int temp;
    int size = v.size(),k;
    for(lli i=0; i<q; i++)
    {
        cin>>a[i];
        //it = find(v.begin(),v.size(),a[i]);
        it = v.begin();
        k=0;
        while(it!=v.end())
        {
            if(*it==a[i]) break;
            it++;

        }
        temp =*it;
        v.erase(it,it+1);
        v.insert(v.begin(),temp);
        int index =  it - v.begin();
        cout<<index+1<<" ";
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
