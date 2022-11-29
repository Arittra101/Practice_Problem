
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
    // v.pb(7);

    for(i=0; i<n; i++)
    {
        lli x;
        cin>>x;
        v.pb(x);
    }
    lli cnt=0;
    SORT(v);


    for(i=0; i<n-2; i++)
    {
        for(j=i+1; j<n-1;j++)
        {
            lli x  =  v[i]+v[j];

            auto it = lower_bound(v.begin(),v.end(),x);
            lli ind = abs(it - v.begin());
//            if(ind !=0 )
//            {
//                it--;
//                ind--;
//            }
            ind--;
            it--;
            if(v[i]+v[j]>*it)
            {

                if(v[ind]!=v[j])
                {
//                    cout<<v[i]<<" "<<v[j]<<" "<<v[ind]<<endl;

                    cnt+=abs(j - ind);
                }

            }



        }
    }
    cout<<cnt<<endl;

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



