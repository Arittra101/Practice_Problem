
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

     map<lli,vector<lli,lli>>graph;

     lli n;
     cin>>n;

     for(i=0;i<n;i++)
     {
         lli x,y;
         cin>>x>>y;

         graph[x].pb(y);
         graph[y].pb(x);
     }

     queue<lli>que;
     set<lli>s;
     s.insert(1);
     que.push(1);
     while(!que.empty())
     {
         lli val = que.front();
         que.pop();
         for(auto it :  graph[val])
         {
            if(!s.count())
            {
                s.insert(it);
            }
         }
     }


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli t,l=0;
    cin>>t;
    while(t--)
    {
        l++;
        //cout<<"Case "<<l<<": ";
        solve();
    }

    return 0;
}



