
#include<bits/stdc++.h>
using namespace std;
typedef double lli;
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
    double a,b,c,d,e,f,g,h;
    cin>>a>>b>>c>>d>>e>>f>>g;
    vi v;
    v.pb(e);
    v.pb(f);
    v.pb(g);
    SORT(v);
    double avg = (v[1]+v[2])/2.0;
    //cout<<avg<<endl;
    double tl = a+b+c+d+avg;

    if(tl>=90)cout<<"A"<<endl;
    else if(tl>=80 && tl<90)cout<<"B"<<endl;
    else if(tl>=70 && tl<80)cout<<"C"<<endl;
    else if(tl>=60 && tl<70)cout<<"D"<<endl;
    else cout<<"F"<<endl;

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
        cout<<"Case "<<l<<": ";
        solve();
    }

    return 0;
}

