#include<bits/stdc++.h>
using namespace std;
#define vec vector<int>
#define pb push_back;


vector<int> omg(vector<int>& nums)
{
         vector<int>ans;

        int pos=0;
        for(int i=0;i<nums.size();i+=2)
        {
            int f = nums[i];
            int v = nums[i+1];

            vector<int>gen_vec(f,v);
            ans.resize(ans.size()+f);
            copy(gen_vec.begin(),gen_vec.end(),ans.begin()+pos);
            pos+=f;
            gen_vec.clear();
        }

        return ans;
}

void max()
{


}
int main()
{

      //  vector<int>num2;

      //  num2.resize(nums.size()+nums.size());
       // copy(nums.begin(),nums.end(),num2.begin());
       // copy(nums.begin(),nums.end(),num2.begin()+nums.size());

       //cout<<num2[num2.begin(),nums.size()];

       // cout<<nums.size();
       // for(int i=0;i<nums.size();i++)
       // {
           // nums.push_back(nums[i]);
           // cout<<"D";
       // }
     //return nums;



       // vector<int>v;
       // v= nums+nums;

     //for(auto it : v)
       // cout<<it<<" ";


       /* vector<int>nums{2,4,3,1};
        vector<int>ans;
        int size = nums.size();
        int pos = 0;
        for(int i=0;i<size;i+=2)
        {
            int f = nums[i];
            int r = nums[i+1];
            vec v(f,r);
            ans.resize(ans.size()+f);
            copy(v.begin(),v.end(),ans.begin()+pos);
            pos+=f;
            v.clear();
        }
       // ans.resize(size);
       // copy(nums.begin(),nums.end(),ans.begin());

       //ans=nums;*/
       vector<int>nums{2,4,3,1};
       vector<int>ans = omg(nums);

    for(auto it : ans)
        cout<<it<<" ";

}
