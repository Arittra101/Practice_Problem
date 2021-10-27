
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli i,j;



void solve(vector<int>& v, int k)
{
    int  sum=v[0],c=0;
    if(sum==k)
    {
        sum=0;
        c++;
    }

    for(int i=1; i<v.size(); i++)
    {
        sum+=v[i];
        if(v[i]==k)
        {
            // cout<<"D";
            c++;
            i++;
        }
        else if(sum>k)
        {
            sum=v[i];
        }
        if(k==sum)
        {
            c++;
            sum=v[i];

        }

        //cout<<c<<endl;

    }
    //  if(v[i-1]==k)
    //    c++;
    //else if(sum==k)c++;
    cout<<c<<endl;
}
void solve2(vector<int>& v, int k)
{

    vector<int>mr;

    int sum=0;
    int c=0;

    for(int i=0; i<v.size(); i++)
    {
        sum+=v[i];
        mr.push_back(sum);
        if(sum==k)
            c++;
    }
    int flag=0;
    int mr_size = mr.size();

    while(1)
    {
        int s = mr[i];
        mr_size= abs(flag-mr_size);
        vector<int>ans(mr_size,0);

        //cout<<"D";
        for(int i=1; i<ans.size(); i++)
        {
            int s = abs(s-mr[i]);
            ans[i-1]=s;
        }

       // mr.resize(size1);


        for(int i=0; i<ans.size(); i++)
        {
            if(ans[i]==k)
                c++;
        }
        flag++;

        if(mr.size()==1)
        {
            if(mr[0]==k)
                c++;

            break;
        }

    }
    cout<<c;
}
int main()
{

    vector<int>v{2,3,4,1,5};
    solve2(v,5);
    return 0;
}



