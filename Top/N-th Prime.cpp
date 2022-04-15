
/*#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e7+9;
#define pi acos(-1.0)
vector<ll>prime;
ll marked[N],n,i,j;
void seive()
{
    for(i=3;i*i<=N;i+=2)
    {
        if(marked[i]==0)
        {
            for(j=i*i;j<=N;j+=i+i)
                marked[j]=1;
        }
    }
     prime.push_back(2);
     for(i=3;i<=N;i+=2)
     {
         if(marked[i]==0)
         {
             prime.push_back(i);
         }
     }
}
int main()
{
    seive();
    cin>>n;
    cout<<prime[n-1]<<endl;
}
*/


/*void solve2()
{
    int k,counter=1;
    cin>>k;
    for (int i=3; i*i<=n; i+=2) //Loop running through only odd numbers
    {
        if (!isPrime[i])
        {
            for (int j=i*i; j<=n; j+=i)
            {
                isPrime[j]=1;
            }
        }
    }
    for (int i=3; i<=n; i+=2) //Loop running through only odd numbers
    {
        if (k==1)
        {
            cout<<2;
            break;
        }
        if (!isPrime[i])
        {
            counter++;
            if (k==counter)
            {
                cout<<i<<'\n';
                break;
            }
        }
    }
    return 0;
}*/


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


void solve()
{
    lli n,flag=0,sm1=0;
    cin>>n;
    vi v;
    v.pb(2);
    for(i=3; i<n*n; i+=2)
    {
        for(j=2; j<i; j++)
        {
            if(i%2==0) flag=1;
        }
        if(!flag) v.pb(i);
    }

    cout<<v[n]<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli t,l=0;
    cin>>t;
    while(t--)
    {
        l++;
        //cout<<"Case "<<l<<": ";
        solve();
    }

    return 0;
}

