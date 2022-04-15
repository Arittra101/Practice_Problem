
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
    lli n, on=0,ze=0;
    cin>>n;

    vi v;
    for(i=0;i<n;i++)
    {
        lli x1;
        cin>>x1;
        x1 = x1%2;
        v.pb(x1);

    }
//    cout<<ze<<" "<<on<<endl;
//    if(ze!=on)
//    {
//        cout<<-1<<endl;
//        return;
//    }

    lli c=0;
    for(i=0;i<v.size();i++)
    {
        lli i1 =i%2;
        if(i1!=v[i])
        {
            if(i1==0)ze++;
            else on++;
        }

    }
    if(ze==on)
    {
        cout<<ze<<endl;
        return;
    }
    cout<<-1<<endl;



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


