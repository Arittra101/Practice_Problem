
/*  C++ code to generate all possible subarrays/subArrays
    Complexity- O(n^3) */
#include<bits/stdc++.h>
using namespace std;
  
// Prints all subarrays in arr[0..n-1]
void subArray()
{
    int n = 4;
    // Pick starting point
    for (int i=1; i <=n; i++)
    {
        for(int j=i;j<=n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<k<<" ";
            }
            cout<<endl;
        }
    }
}
  
// Driver program
int main()
{

    subArray();
    return 0;
}