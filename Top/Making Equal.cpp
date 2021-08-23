
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

    int t;
    cin>>t;
    while(t--)
    {
        map<char,int>m;
        map<char,int>:: iterator it;
        string s;
        cin>>s;
        int large=0;
        char temp;
        char temp_char='z';
        //cout<<m['a'];
        for(int i=0; i<s.size(); i++)
        {
            m[s[i]]++;
            int c =  m[s[i]];
            if(c==large)
            {
                if(s[i]<temp_char)
                {
                    temp_char = s[i];
                    large = c;
                }
            }

            else if(c>large)
            {
                temp_char = s[i];
                large = c;
            }
        }
        cout<<s.size()-large<<endl;
        for(int i=0; i<s.size(); i++)
            cout<<temp_char;
        cout<<endl;

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
