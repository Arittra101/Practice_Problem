
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


void solve(vector<int>& v)
{
    int n =  v.size();
    vector<int>ans(v.size(),0);
    vector<int>left(v.size(),0);
    vector<int>right(v.size(),0);

    left[0]=v[0];
    right[n-1] = v[n-1];

    for(int i=1; i<n; i++)
    {
        left[i] = v[i]*left[i-1];
    }

    for(int i=n-2; i>=0; i--)
    {
        right[i] = v[i]*right[i+1];
    }
    ans[0] = right[1];
    ans[n-1] = left[n-2];
    for(int i=1; i<n-1; i++)
    {
        ans[i] = left[i-1]*right[i+1];
    }
    //return ans;

    for(int i=0; i<n; i++)
    {
        cout<<ans[i]<<" ";
    }


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int>v{1,2,3,4};
    solve(v);
    return 0;
}



