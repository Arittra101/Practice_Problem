
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




solve2(vector<int>& v)
{

    if(v.size()<3) return {};
    vector<vector<int>>ans;
    vector<int>:: iterator it;
    sort(v.begin(),v.end());
    int c=0;
    for(int i=0; i<v.size()-2; i++)
    {
        if(i == 0 || v[i] != v[i-1])
        {
            int res = v[i];
            int f = i+1;
            for(j=i+1; j<v.size(); j++)
            {
                     c++;
                    // cout<<"c-> "<<c<<endl;
                if(j==f|| v[j]!=v[j+1])
                {
                    int sum = res+v[j];
                      //cout<<"->"<<sum<<endl;
                    it = find(v.begin()+j+1,v.end(),(-1)*sum);
                    if(it!=v.end())
                        ans.push_back({v[i],v[j],*it});

                }

            }
        }

    }

    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i][0]<<ans[i][1]<<ans[i][2]<<endl;
    }

}

solve3(vector<int>& v)
{

    int n = v.size();
  if(v.size()<3) return {};
    vector<vector<int>>ans;
    vector<int>:: iterator it;
    sort(v.begin(),v.end());

    for(int i=0;i<v.size()-2;i++)
    {
        if(i==0 || v[i]!=v[i-1])
        {
            int j = i+1;
            int k = n-1;

            while(j<k)
            {
                int sum = v[i]+v[j]+v[k];
                if(sum==0)
                {
                    ans.push_back({v[i],v[j],v[k]});
                    while(j<k && v[j] == v[j+1]) j++;
                    while(j<k && v[k]==v[k-1]) k--;

                    j++;
                    k++;
                }
                else if(sum>0) k--;
                else j++;
            }
        }
    }

     for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i][0]<<ans[i][1]<<ans[i][2]<<endl;
    }


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //vector<int>v{-3,1,2,1,-2};
    vector<int>v{2,-1,-1,0,0,0,0};
    solve2(v);
    return 0;
}


