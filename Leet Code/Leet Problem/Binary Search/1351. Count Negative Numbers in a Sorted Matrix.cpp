
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


int countNegatives(vector<vector<int>>& v)
{

    int c=0;
    for(int i= 0; i<v.size(); i++)
    {
        int left =0,right = v[i].size();
        while(v[i][right-1]<0)
        {

            if(right==1)
            {
                if(v[i][right-1]<0)
                {
                    c++;
                    break;
                }
            }
            int mid = (right-left)/2 + left;
            if(v[i][mid]<0)
            {
                right = mid;
            }
            else left = mid;

        }
        c += v[i].size()-right;

    }
    return c;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<vector<int>>v{{2,-1,-1,-3},{3,2,1,-1},{1,1,-1,-2}};
    cout<<countNegatives(v);
    return 0;
}
