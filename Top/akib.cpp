#include<bits/stdc++.h>
#include<vector>
#include<set>
#include<algorithm>
#include<map>
#include <cmath>

using namespace std;

#define rep(i,n) for(int i=0; i<(n); i++)
#define T int t, q=0; scanf("%d", &t); while(q++<t)
#define ll long long
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
ll x,y,z,r,a=0,b=0,c=0,d=0,v,u,f,sum,ans,total,cnt,n,m,k,p,kase,i,r2,r3;
#define PI acos(-1)
#define N 100001
#define MX 1000000001
#define vs    vector<string>
#define pi 3.14159265358979323846



//SET PRECIOSION   cout << fixed ;  cout << setprecision(n) << ans << endl;



int main()
{
    y=0;
    T
    {
        y++;
        cin>>n>>k>>x;
        ll ar[n];
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }

        a=0;


        for(int i=1; i<n; i++)
        {
            while(ar[i]<ar[i-1])
            {
                ar[i]=ar[i]+x;
                a++;
            }
            cout<<ar[i]<<" ";
        }

        bool f=true;

        cout<<a<<endl;
        cout<<"Case "<<y<<": ";
        if(a>k)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;


    }

}
