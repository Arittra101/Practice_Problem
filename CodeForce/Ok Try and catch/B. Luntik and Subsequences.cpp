
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
lli fac(lli n)
{
    lli rs = 1;
    for(j=1; j<=n; j++)
        rs*=j;
    return rs;
}
lli ncr(lli n,lli r)
{
    lli nr = n-r;
    n =  fac(n);
    r =  fac(r);
    nr = fac(nr);

    return  n/(r*nr);

}

void solve()
{
    lli n,z=0,o=0;
    cin>>n;
    vi v;
    for(i=0; i<n; i++)
    {
        lli x;
        cin>>x;
        v.pb(x);
        if(x==0)z++;
        else if(x==1) o++;
    }
    if(o==0){
        cout<<0<<endl;
        return;
    }
   // if(o!=0)
  //  o = ncr(o,1);
    lli ans = 0;

//    for(i=0;i<=z;i++)
//    {
//        ans+=ncr(z,i)*o;
//    }
    ans = pow(2,z)*o;
    cout<<ans<<endl;


}
int main()
{

    lli t,l=0;
    cin>>t;
    while(t--)
    {
        l++;
        //cout<<"Case "<<l<<": ";

        solve();

       // cout<<ncr(5,4);
    }

    return 0;
}

