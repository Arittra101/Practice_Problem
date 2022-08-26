
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
    lli t;
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        lli n1= n;
        n*=2;
        lli k=n/2,k1=n/2-1;
        while(n1--)
        {

            for(i=n/2-1; i>=0; i--)
            {

                if(i==k)
                {

                    cout<<')';
                }
                else cout<<'(';
            }
            for(j=n/2; j<n; j++)
            {

                if(j==k1)
                {
                    cout<<'(';
                }
                else cout<<')';
            }
            k--;
            k1++;

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


