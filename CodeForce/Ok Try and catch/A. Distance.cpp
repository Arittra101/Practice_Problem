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

    lli t;
    cin >> t;
    while(t--){
        lli x, y;
        cin >> x >> y;
        lli ans;
        ans = x+y;
        if(ans%2==0){
            ans /= 2;
            if(x>y) cout << ans << " " << 0 << en;
            else cout << 0 << " " << ans << en;
        }
        else cout << -1 << " " << -1 << en;
    }
 }
 int main()
 {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     solve();
     return 0;
 }
