
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;


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

void solve()
{

    lli n;
    cin >> n;
    lli sm = 0, od, ev;
    vi v;
    for (int i = 0; i < n; i++)
    {
        lli x;
        cin >> x;
        v.pb(x);
        sm += x;
    }
    if (sm % 2 == 0)
    {
        cout << 0 << endl;
        return;
    }
    lli mn = INT_MAX,cnt;
    for(int i=0;i<n;i++)
    {   
        cnt=0;
        if(v[i]%2==0)
        {
             cnt = v[i]/2;
           
        }
        else if(v[i]%2!=0) {
            lli x =v[i];
            while(1)
            {
                x = x/2;
                cnt++;
              //  cout<<"D1";
                if(x%2==0) break;
            }
           
        } mn =  min(cnt,mn);
    }
    cout<<mn<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli t, l = 0;
    cin >> t;
    while (t--)
    {
        l++;
        // cout<<"Case "<<l<<": ";
        solve();
    }

    return 0;
}
