
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
vector<pair<lli,lli>>v[100];
lli visited[100];
lli node,edge;
lli sum=0;
lli i,j;
lli vertex=0;

#define pii  pair<lli, lli>
#define vi vector<lli>
#define pb push_back
#define mp make_pair
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define SORT(v) sort(v.begin(),v.end());
#define R_SORT(v) sort(v.begin(),v.end(),greater<lli>());
#define en "\n"

bool min_check(lli nd,lli weight)
{   lli mn = INT_MAX;
  //  cout<<v[nd].size();
    for(lli k=0;k<v[nd].size();k++)
    {
           // cout<<"D";
           if(v[nd][k].second!=-1)
        mn = min(weight,v[nd][k].first);
    }
    if(mn==weight)return true;
    else return false;
}

void prims()
{

    for(i=0;i<node;i++)
    {
        for(j=0;j<v[i].size();j++)
        {
            lli weight =  v[i][j].first;
            lli nd =  v[i][j].second;

            if(visited[nd]!=1)
            {
                if(min_check(nd,weight)==true && vertex<node-1){
                 // cout<<weight<<endl;
                 cout<<i<<" "<<nd<<endl;
                    sum+=weight;
                    visited[nd]=1;
                    v[i][j].second=-1;
                    vertex++;
                }

            }
        }
    }
    cout<<sum;
}
int main()
{
   // ios_base::sync_with_stdio(false);
   // cin.tie(NULL);
   // cout.tie(NULL);

    //cout<<"Enter the Number of node "<<endl;
    cin>>node;
   // cout<<"Enter the Number of edge "<<endl;
    cin>>edge;

    //cout<<"Graph Input "<<endl;
    for(i=0;i<edge;i++)
    {
        lli a,b,cost;
        cin>>a>>b>>cost;
        v[a].pb(make_pair(cost,b));
        v[b].pb(make_pair(cost,a));

    }
    prims();
    return 0;
}


