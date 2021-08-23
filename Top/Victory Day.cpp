
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
        int n;
        cin>>n;
        cout<<"Bir Sreshtho ";

        if(n==1)cout << "Captain Mohiuddin Jahangir";
        else if(n==2)cout << "Sepahi Hamidur Rahman";
        else if(n==3)cout << "Sepahi Muhammad Mustafa";
        else if(n==4)cout << "Engine Room Artificer Mohammad Ruhul Amin";
        else if(n==5)cout << "Flight Lieutenant Matiur Rahman";
        else if(n==6)cout << "Lance Naik Munshi Abdur Rouf";
        else if(n==7)cout << "Lance Naik Noor Mohammad Sheikh";

        cout<<": Amra Tomay Vulbo Na."<<endl;

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

