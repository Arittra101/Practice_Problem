
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
    vector<lli>v;
    lli sum=0;
    for(i=0;i<n;i++)
    {
        lli x;
        cin>>x;
        sum+=x;
        v.pb(x);
    }
    sort(v.begin(),v.end());
      lli mx = v[n-1];
    lli mn = INT_MAX;
    lli min_sum = abs(mx-sum);
    lli ans = abs(min_sum-mx);
    mn = min(mn,ans);
    for(i=0;i<n-1;i++)
    {
        mx = mx + v[i];
        min_sum -= v[i];
        ans = abs(mx - min_sum);
        mn =  min(ans,mn);

    }
    cout<<mn;
}
void  solve2()
{
       int n;
    int arr[22];
    int sum = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int ans = sum;
    bool dp[sum+1];
    memset(dp, 0, sum);
    dp[0] = 1;
    for (int j = 1; j < n; j++) {
        for (int i = sum; i >= 1; i--) {
            if(i >= arr[j] && dp[i - arr[j]]) {
                dp[i] = 1;
                ans = min(ans, abs(sum- i*2));
            }
        }
    }
    printf("%d\n",ans);
}
int main()
{

    solve();
    return 0;
}
