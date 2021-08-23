
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

template <typename T> inline T Ceil(T a, T b)
{
    return ((a % b == 0) ? (a / b) : (a / b + 1));
}
template <typename T> inline T Floor(T a, T b)
{
    return a / b;
}

template <typename T> inline T Power (T a, T p)
{
    T res = 1, x = a;
    while ( p )
    {
        if ( p & 1 ) res = ( res * x );
        x = ( x * x );
        p >>= 1;
    }
    return res;
}

template <typename T> inline T gcd ( T a, T b )
{
    a = abs(a);
    b = abs(b);
    while ( b )
    {
        a = a % b;
        swap ( a, b );
    }
    return a;
}
template <typename T> inline T lcm(T x,T y)
{
    return (((x)/__gcd((x),(y)))*(y));
}
template <typename T> inline T isPrime(T n)
{
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (lli i = 5; i * i <= n; i = i + 6) if (n % i == 0 || n % (i + 2) == 0) return false;
    return true;
}

bool cmp(const pii &v1, const pii &v2)
{
    return (v1.second + v1.first*10)/v1.first < (v2.second + v2.first*10)/v2.first;
}
void solve()
{

    int t;
    cin>>t;
    while(t--)
    {
        vector<int>v;
        int n;
        cin>>n;

        int n1=n*n;
        char a[n1];

        int k=0;
        for(int i=0; i<n1; i++)
        {
            cin>>a[i];
            if(a[i]=='*')
             v.push_back(i);

        }


        int row = v[0]/n;
        int row1 = v[1]/n;
        int co1 = v[0]%n;
        int co2 = v[1]%n;


        if(row==row1)
        {

            if(row==(n-1))
            {
                a[v[0]-n]='*';
                a[v[1]-n]='*';

            }
            else
            {
                a[v[0]+n]='*';
                a[v[1]+n]='*';

            }

        }
        else if(co1==co2){

            if(co1==(n-1)){
                a[v[0]-1]='*';
                a[v[1]-1]='*';

            }
            else{

                a[v[0]+1]='*';
                a[v[1]+1]='*';

            }
        }

        else {

            if(co1>co2)
            {
                lli d = co1 - co2;
                a[v[0]-d]='*';
                a[v[1]+d]='*';

            }
            else{
                 lli d = co2 - co1;
                  a[v[0]+d]='*';
                  a[v[1]-d]='*';
            }
        }

        for(int i=0; i<n1; i++)
        {
            cout<<a[i];
            if(i%n==(n-1))
                cout<<endl;
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

