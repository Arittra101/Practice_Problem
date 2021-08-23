
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

    vector<lli>v;
    lli l=0;
    for(lli i=1;i<=15;i++)
    {
        if((i!=7)&&(i!=11)&&(i!=13)&&(i!=14))
        {
              v.push_back(i);

        }

    }
    lli num=16,c=11,d = 1500;
    while(1)
    {
        int check =0;
        lli i = num;

        while(1)
        {
            if(i%2==0) i = i/2;
            else if(i%3==0) i = i/3;
            else if (i%5==0) i = i/5;
            //cout<<i;
           if((i==3)||(i==5)||(i==2))
            {
                //cout<<"dsd";
                c++;
                check=1;
               // cout<<c<<endl;
                break;

            }
            else if((i%3!=0)&&(i%5!=0)&&(i%2!=0)){

                break;
            }

        }
       if(check==1)
       {
            v.push_back(num);
           // c++;
            //cout<<"DSD";
       }
       num++;

      if(c>=d) break;
    }



     cout<<v[d-1]<<endl;

       //cout<<num<<" d"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}

