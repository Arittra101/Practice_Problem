
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli i,j;

#define pii  pair<lli, lli>
#define vi vector<lli>
#define pb push_back
#define mp make_pair
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define SORT(v) sort(v.begin(),v.end());
#define R_SORT(v) sort(v.begin(),v.end(),greater<lli>());
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
    if (n % 2 == 0 | n % 3 == 0) return false;
    for (lli i = 5; i * i <= n; i = i + 6) if (n % i == 0 || n % (i + 2) == 0) return false;
    return true;
}

bool cmp(const pii &v1, const pii &v2)
{
    return (v1.second + v1.first*10)/v1.first < (v2.second + v2.first*10)/v2.first;
}
void solve(vector<int> &v)
{
    int sum=0,mx = v[0],j=v[0];
    sum+=v[0];
    for(i=1; i<v.size(); i++)
    {
        if(v[i]>=j)
        {
            j= v[i];
            sum+=j;
        }
        else
        {
            mx = max(mx,sum);
            sum=0;
            sum+=v[i];
            j=v[i];

        }
        mx =max(mx,sum);

    }
    cout<<mx;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int>v{2,2,2,2};
    solve(v);

    return 0;
}


