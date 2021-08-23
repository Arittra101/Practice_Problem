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
    string b="the end.";
    while(1)
    {
        string a;
        getline(cin,a);
        if(a==b) break;

        for(int i=0; i<a.size(); i++)
        {
            if(a[i]=='b')
                a[i]='6';
            else if(a[i]=='g')
                a[i]='9';
            else if(a[i]=='l')
                a[i]='1';
            else if(a[i]=='o')
                a[i]='0';
            else if(a[i]=='s')
                a[i]='5';
            else if(a[i]=='z')
                a[i]='2';
            else if(a[i]=='6')
                a[i]='b';
            else if(a[i]=='9')
                a[i]='g';
            else if(a[i]=='0')
                a[i]='o';
            else if(a[i]=='5')
                a[i]='s';
            else if(a[i]=='1')
                a[i]='l';
            else if(a[i]=='2')
                a[i]='z';
        }
        cout<<a<<endl;
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
