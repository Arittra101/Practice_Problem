
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


/*void solve()
{
    lli n,k,sm=0,sm1=0;
    cin>>n>>k;
    vi v(n);
    for(auto &i : v) cin>>i;
    lli c=0,i=0,sum=0;
    while(c<k)
    {
        auto mn = min_element(v.begin(),v.end());
        lli pos = abs(v.begin()-mn);
        v[pos]*=(-1);
          //for(auto it : v) cout<<it<<" ";
         // cout<<endl;
        c++;

    }
    for(auto it : v)
    sum+=it;
    cout<<sum<<endl;



}*/
void solve2()
{
    lli n,k,c=0,m=0,sm=0;
    cin>>n>>k;
    vi v(n);
    for(auto &i:v){

        cin>>i;
        if(i<0) m++;
    }

    for(i=0;i<n;i++)
    {
        if(k==0)break;
        if(c>=m)break;
        if(v[i]<0)
        {
             v[i]*=(-1);
             c++;
        }



    }
    SORT(v);


    if(abs(k-m)>0)
    {
        lli st =  abs(k-m);
       // cout<<"f"<<st<<endl;

        if(st%2!=0)  v[0]*=(-1);
  //  cout<<"mn1: "<<mn<<endl;


    }
    sm+=v[0];
    cout<<sm<<endl;
    for(i=1;i<n;i++){
            sm+=v[i];
            cout<<"v: "<<v[i]<<"sum: "<<sm<<endl;
    }

    cout<<sm<<endl;

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
        solve2();
    }

    return 0;
}


