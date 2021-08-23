
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




int nearestValidPoint(int x, int y, vector<vector<int>>& p)
{


    int index=INT_MAX,ans=INT_MAX;
    for(int i=0; i<p.size(); i++)
    {
        if(p[i][0]==x||p[i][1]==y)
        {
             int r = abs(x-p[i][0])+ abs(y-p[i][1]);
             if(r<ans)
             {
                 ans=r;
                 index = i;
             }

        }
    }
    if(index==INT_MAX) return -1;
    else return index;

}



    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
         cout.tie(NULL);
       vector<vector<int>>p;
       p.pb(vector<int>{1,2});
       p.pb(vector<int>{3,1});
       p.pb(vector<int>{2,4});
       p.pb(vector<int>{2,3});
       p.pb(vector<int>{4,4});


        cout<<nearestValidPoint(3,  4, p);
        return 0;
    }
