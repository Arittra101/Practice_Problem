
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
lli fact(lli n)
{
    if(n==1||n==0)
        return 1;
    else return n+fact(n-1);
}
bool cmp(const pii &v1, const pii &v2)
{
    return (v1.second + v1.first*10)/v1.first < (v2.second + v2.first*10)/v2.first;
}
void solve()
{
    vi v;
    lli n,c=1,c1=1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        lli x;
        cin>>x;
        v.pb(x);
    }
    sort(v.begin(),v.end(),greater<lli>());
    lli mx = v[0];
    lli mn = v[v.size()-1];
    i=1;
    lli cheak=0;
    if(mx==mn) cheak=1;
    while(1)
    {
        if(cheak==1) break;
        if(mx!=v[i]||(i==n-1)) break;
        i++;
        c++;
    }
    i = v.size()-2;
    while(1)
    {
        if(cheak==1) break;
        if(mn!=v[i]||(i==0)) break;
        i--;
        c1++;
    }
     c =c1*c;
    if(cheak==1)
        c = fact(n-1);
    cout<<abs(mx-mn)<<" "<<c;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   solve();
  // cout<<fact(5);
    return 0;
}


