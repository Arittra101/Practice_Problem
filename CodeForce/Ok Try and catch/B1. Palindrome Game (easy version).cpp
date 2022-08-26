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


int p_check(string temp)
{
    string temp1= temp;
    reverse(temp1.begin(),temp1.end());
    if(temp==temp1)
        return 1;
    else return 0;
}

void solve()
{

    lli n,bob=0,alice=0,one=0,rverse=0,count=0;
    cin>>n;
    string s,temp;
    cin>>s;
    while(1)
    {

        if(s.find('0')!=std::string::npos)
        {
            if(!p_check(s)&&rverse==0)
            {

                reverse(s.begin(),s.end());
                rverse=1;
            }
            else
            {
                lli index = s.find('0');
                s[index]='1';

                if(count%2==0)
                    alice++;
                else bob++;
                rverse=0;
            }

            count++;
        }
        else
            break;


    }
    if(bob<alice)
        cout<<"BOB"<<endl;
    else if(bob>alice)
        cout<<"ALICE"<<endl;
    else cout<<"DRAW"<<endl;
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
