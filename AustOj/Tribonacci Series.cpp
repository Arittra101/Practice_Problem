
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int x, y, z;
int printTribRec(int n,vi dp)
{

    if(dp[n]!=-1) return dp[n];
    else if (n == 0)
        return x;
    else if (n == 1)
        return y;
    else if (n == 2)
        return z;
    else
    {
       // cout<<x<<" "<<y<<" "<<z;
        return dp[n] = printTribRec(n - 1,dp) + printTribRec(n - 2,dp) + printTribRec(n - 3,dp);
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int  n;
        cin >> x >> y >> z >> n;
        vi dp(n+1,-1);
         cout << printTribRec(n,dp)<<endl;
       
    }
}

