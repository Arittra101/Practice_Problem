
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

    lli t;
    cin>>t;
    while(t--)
    {
        lli n;
        vector<lli>v;
        vector<lli>:: iterator it;
        cin>>n;
        for(lli i=0; i<n; i++)
        {
            lli x;
            cin>>x;
            v.push_back(x);
        }

        it  = max_element(v.begin(),v.end());
        lli max = abs(v.begin()-it)+1;
        it  = min_element(v.begin(),v.end());
        lli min = abs(v.begin()-it)+1;
        if(max<min) swap(max,min);

        if((max==n&&min==n-1)||(max==2&&min==1)) cout<<2<<endl;
        else if(abs(min-max)==1)
        {
            lli m = abs(n-min)+1;
            lli m1 = max;
            if(m>m1) swap(m,m1);
            cout<<m<<endl;
        }
        else{

            lli a = min,b = abs(n-min)+1,l = max;
            lli b1 = b;
            if(a>b) swap(a,b);
           // cout<<"Aritta"<<endl;
            lli c = abs(min-max),d=(n-max)+1;
            if(c>d) swap(c,d);

            if(b1>l)swap(b1,l);
            c = a+c;
            if(b1>c)swap(b1,c);
            cout<<b1<<endl;
            //cout<<l<<endl;

        }


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

