#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

#define pii  pair<lli, lli>
#define pb push_back
#define en "\n"
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


void solve()
{
    lli t, n;
    cin >> t;
    string s, z, mx;
    vector<pii> vec;
    vector<pair<pii, pii>> ara;
    while(t--){
        cin >> s;
        mx = s;
        n = s.size();
        for(lli i=0; i<n; i++){
            for(lli j=i+1; j<n; j++){
                vec.pb({i, j});
            }
        }
        for(lli i=0; i<vec.size(); i++){
            for(lli j=i+1; j<vec.size(); j++){
                ara.pb({vec[i], vec[j]});
            }
        }
        for(auto i:ara){
            z = s;
            auto a = i.first;
            auto b = i.second;

            swap(z[a.first], z[a.second]);
            swap(z[b.first], z[b.second]);

            mx = max(mx, z);
        }
        cout << mx << en;
        vec.clear();
        ara.clear();
    }
}

int main()
{
    FAST
    solve();

    return 0;
}
