

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

bool cmp(pair<string,lli> a,pair<string,lli> b)
{
    return a.second>b.second;
}
void sor1(map<string, lli>M)
{
    vector<pair<string, lli> > A;

    for (auto& it : M)
    {
        A.push_back(it);
    }

    sort(A.begin(), A.end(), cmp);

    int t=0;
    for (auto& it : A)
    {
        t++;
        if(t==2)
        {
            cout << it.first;
            break;
        }
    }
}
void solve()
{

    lli t;
    cin>>t;
    map<string,lli>m;
    //map<string,lli>:: iterator it;
    while(t--)
    {
        string name;
        lli h;
        cin>>name>>h;
        m.insert(make_pair(name,h));
    }
  //  sor1(m);


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
