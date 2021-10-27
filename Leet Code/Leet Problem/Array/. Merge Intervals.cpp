

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


#define pii  pair<lli, lli>
#define vi vector<lli>
#define pb push_back
#define mp make_pair
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define SORT(v) sort(v.begin(),v.end());
#define R_SORT(v) sort(v.begin(),v.end(),greater<lli>());
#define en "\n"

bool vec_sort(vector<int>&v1, vector<int>&v2)
{
    return v1[1]<v2[1];  //choto age thakbe
}

/*void solve(vector<vector<int>>& v)
{
    sort(v.begin(),v.end());
    vector<vector<int>>ans;


    int first = v[0][0];
    int last = v[0][1];
    for(i=1; i<=v.size(); i++)
    {

        if(i==v.size())
        {
            if(last>v[i-1][0])
            {
                vector<int>u_ans;
                u_ans.pb(first);
                u_ans.pb(v[i-1][1]);
                ans.pb(u_ans);
            }
            else
            {
                vector<int>u_ans;
                u_ans.pb(v[i-1][0]);
                u_ans.pb(v[i-1][1]);
                ans.pb(u_ans);
            }
        }
       else  if(last>v[i][0])
        {
            last = v[i][1];
        }
        else
        {
            vector<int>u_ans;
            u_ans.pb(first);
            u_ans.pb(last);

            ans.pb(u_ans);
            first  = v[i][0];
            last = v[i][1];
        }



    }

    for(i = 0 ; i < v.size(); i++)
    {
        for(j=0; j<2; j++)
        {
            cout<<v[i][j];
        }
        cout<<endl;
    }
}*/

void solve2(vector<vector<int>>&v)
{
        sort(v.begin(),v.end());
        vector<vector<int>>ans;

        vector<int>f;
        f.pb(v[0][0]);
        f.pb(v[0][1]);

        ans.pb(f);

        int first = ans[0][0];
        int last = ans[0][1];
        int k=0;


        for(int i=1;i<v.size();i++)
        {

            if(v[i][0]<=last)
            {
                ans[k][1] = max(v[i][1],last);
                ans[k][0] =  min(v[i][0],first);
                first = ans[k][0];
                last = ans[k][1];
               // cout<<" -> "<<first<<" "<<last<<endl;
            }
            else{


                vector<int>temp;
                temp.pb(v[i][0]);
                temp.pb(v[i][1]);

                ans.pb(temp);

                k++
                first =  ans[k][0];
                 //cout<<"D";
                last =  ans[k][1];


            }
        }
         cout<<k<<endl;

        for(int i =0 ;i<=k;i++)
        {
            cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
        }

}
int main()
{

    vector<vector<int>>v{{2, 3},
        {2, 4},
        {1, 10},{9, 18}};
    solve2(v);
    return 0;
}


