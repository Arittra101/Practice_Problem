
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

bool cmp(const pii &v1, const pii &v2)
{
    return (v1.second + v1.first*10)/v1.first < (v2.second + v2.first*10)/v2.first;
}
void solve()
{
    lli s,k,cnt=0;
    cin>>s>>k;
    for(int a=0;a<=s;a++)
    {
        for(int b=0;a+b<=s;b++)
        {
            for(int c=0;a+b+c<=s;c++)
            {
                if(a*b*c<=k) {
                   // cout<<a<<" "<<b<<" "<<c<<endl;
                    cnt++;
                }
            }
        }
    }
    cout<<cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}


