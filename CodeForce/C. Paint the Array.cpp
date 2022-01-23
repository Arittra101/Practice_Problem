
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


void solve1()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n;
        vi v;
        cin>>n;
        while(n--)
        {
            lli x;
            cin>>x;
            v.pb(x);
        }

        n =  v.size();
        if(n==2)
        {
            cout<<max(v[0],v[1])<<endl;
        }
        else
        {
            lli flag=0,check=1;
            if(v[0]%2==0)flag =0;
            else flag=1;
            for(i=1; i<n; i++)
            {
                if(v[i]%2==0 && flag==1)
                {
                    flag=0;
                }
                else if(v[i]%2!=0 && flag==0)
                {
                    flag=1;
                }
                else
                {
                    cout<<0<<endl;
                    check=0;
                    break;
                }
            }
            if(check)cout<<2<<endl;
        }
    }
}

void solve()
{
        lli n;
        cin>>n;
        vi v;
        for(i=0; i<n; i++)
        {
            lli x;
            cin>>x;
            v.pb(x);
        }
        lli d0 = 0,d1=0;

        for(i=0; i<v.size(); i+=2) d0= __gcd(d0,v[i]);

        lli ans = true;
        for(i=1; i<v.size(); i+=2)
        {
            if(v[i]%d0==0)
            {
                ans = false;
                break;
            }
        }
        if(ans)
        {
            cout<<d0<<endl;
            return;
        }
        ans = true;

        for(i=1; i<v.size(); i+=2) d1 = __gcd(d1,v[i]);

        for(i=0;i<v.size();i+=2)
        {
            if(v[i]%d1==0)
            {
                ans = false;
                break;
            }
        }
        if(ans){
            cout<<d1<<endl;
            return;
        }
        cout<<0<<endl;

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
