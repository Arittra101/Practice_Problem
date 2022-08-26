#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli i, j;
 
#define pii pair<lli, lli>
#define vi vector<lli>
#define pb push_back
#define mp make_pair
#define yes cout << "YES" \
                 << "\n";
#define no cout << "NO" \
                << "\n";
#define SORT(v) sort(v.begin(), v.end());
#define R_SORT(v) sort(v.begin(), v.end(), greater<lli>());
#define en "\n"
lli s;
 
bool SORT1(pair<lli, lli> p1, pair<lli, lli> p2)
{
    return p1.first < p2.first;
}
void solve()
{
  
    lli n,k,b,s;
    cin>>n>>k>>b>>s;
    
    if(k*b<=s){

            lli last_val = min(s,k*b+k-1);
            s-=last_val;
            if(s>((k-1)*(n-1))){
                cout<<-1<<endl;
                return;
            }

            vi v(n);
            v[n-1]= last_val;
            for(i=n-2;i>=0;i--)
            {
             
                if(s<=k-1)
                {
                    v[i]=s;
                    s=0;
                }
                else if(s>k-1)
                {
                    v[i]=k-1;
                    s-=k-1;
                }

            }
            for(auto it : v)cout<<it<<" ";
            cout<<endl;        
    }
    else{
        cout<<-1<<endl;
        return;
    }
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // cout<<"Case "<<l<<": ";
}