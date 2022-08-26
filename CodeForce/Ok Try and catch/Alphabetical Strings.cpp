
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





            //   fdbace

void solve()
{

    string s;
    cin>>s;
    deque<char>dq;
    char maxi = 'a';
    for(int i =0;i<s.size();i++)
    {
        maxi = max(s[i],maxi);
        dq.push_back(s[i]);
    }
    for(char ch=maxi; ch>='a';ch--)  //if is yes must loop will be finish with a;
    {
        if(dq.size()==0)
        {
            cout<<"No"<<endl;
            return;
        }
         if(ch==dq.front()) dq.pop_front();
        else if(ch==dq.back()) dq.pop_back();

        else {
            cout<<"No"<<endl;
            return;
        }
    }
    if(dq.size()==0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;



}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli t;
    cin>>t;
    while(t--)
    {

        solve();

    }

    return 0;
}

