
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


int solve(vector<int>& nums)
{

        vector<int>nums1(nums.size(),0);
        int sum =0;
        for(int i=0;i<nums.size();i++)
        {
            sum +=nums[i];
            nums1[i]=sum;
        }

        int sum_l,sum_r;
       for(int i=0;i<nums.size();i++)
       {

           if(i==0)
           {
               //cout<<nums1[nums.size()-1]<<endl;
               if(0 == nums1[nums.size()-1])
                   return i;
           }
           else if(i==(nums.size()-1))
           {

                if(nums1[i-1] == 0)
                   return i;
           }
           else {
                cout<<nums1[nums.size()-1]<<" "<<nums1[i-1]<<endl;
                sum_r = nums1[nums.size()-1] - nums1[i];
               if(sum_r==nums1[i-1])
                   return i;
           }
       }
        return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int>v{1,7,3,6,5,6};
    cout<<solve(v);
    return 0;
}



