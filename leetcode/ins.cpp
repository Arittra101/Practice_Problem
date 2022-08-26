#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli i, j;

#define pii pair<lli, lli>
#define vi vector<lli>
#define pb push_back
#define mp make_pair
#define yes cout << "YES" \
                 << "\n";
#define no cout << "NO" \
                << "\n";
#define SORT(v) sort(v.begin(), v.end());
#define R_SORT(v) sort(v.begin(), v.end(), greater<lli>());
#define en "\n"
lli s;

bool SORT1(pair<lli, lli> p1, pair<lli, lli> p2)
{
    return p1.first < p2.first;
}
vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{

    cout<<"dsd";
    map<int, int> m;
    vector<int> v;
   
    for (int i = 0; nums2.size(); i++)
    {
        m[nums2[i]] = 1;
        cout<<nums2[i];
    }
    for (auto it : nums1)
    {
        cout<<"Fdf";
        if (m[it] == 1)
        {
            v.push_back(it);
        }
    }
    return v;
}

int main()
{

    vector<int> nums1{4,9,5};
    vector<int> nums2{9,4,9,8,4};
    vector<int>v;
   
    intersect(nums1,nums2);
   for(auto it : v)cout<<it<<" ";
    
    // cout<<"Case "<<l<<": ";
}