
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
    lli n;
    cin>>n;
    vi v;
    for(i=0; i<n; i++)
    {

        lli x;
        cin>>x;
        v.pb(x);
    }

    i=0;
    j = n-1;
    lli s=0,d=0,cnt=n,scnt=1;
    while(cnt!=0)
    {
        cnt--;
        if(v[i]>v[j])
        {
            if(scnt%2!=0) s+=v[i];
            else d+=v[i];
            i++;
        }
        else
        {
            if(scnt%2!=0) s+=v[j];
            else d+=v[j];
            j--;
        }
        scnt++;

    }
    cout<<s<<" "<<d<<endl;

}
int main()
{


        solve();


    return 0;
}



