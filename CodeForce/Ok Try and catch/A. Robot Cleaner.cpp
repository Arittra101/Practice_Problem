
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
    // lli n,sm=0,sm1=0;
    // cin>>n;
    // vi v(n);
    // for(auto &i : v) cin>>i;
    lli r,c,rb,cb,rd,cd;
    cin>>r>>c>>rb>>cb>>rd>>cd;

    if(rb==rd || cb==cd)
    {
        cout<<0<<endl;
        return;
    }
    else if(cd<cb)
    {

        lli pos;

        //cout<<"DF1";
        pos = abs(cb-c) + abs(c-cd);




        return;

    }
    else
    {
        lli r;
        if(rb<rd)

            r = abs(rd-rb);

        else
            r = abs(cd-cb);
        cout<<r<<endl;
//        cout<<c<<endl;
        return;

    }
}

int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
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


