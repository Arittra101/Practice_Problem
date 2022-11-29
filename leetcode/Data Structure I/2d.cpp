/* C++ code to demonstrate a 2D vector
with elements(vectors) inside it. */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
    Below we initialize a 2D vector
    named "vect" on line 12 and then
    we declare the values on
    line 14, 15 and 16 respectively.
    */

    vector<vector<int>> vect{
        {1, 2},
        {4, 5}};

        int r = 1,c=4;
      int m = vect.size(), n = vect[0].size();
   

        vector<vector<int>> res(r, vector<int>(c, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int k = i * n + j;
                cout<<i<<"-"<<j<<"-"<<n<<"-"<<c<<"-"<<k<<endl;
                cout<<"k->"<<k<<" "<<"k/c->"<<k/c<<" "<<"kmdC->"<<k%c<<endl;
                res[k / c][k % c] = vect[i][j];
            }
        }

       for (int i = 0; i < res.size(); i++)
    {
    	for (int j = 0; j < res[i].size(); j++)
    	{
    		cout << res[i][j] << " ";
    	}
    	cout << endl;
    }
    // int r = 1, c = 4;
    // int n = 2;
    // int m = 3;
 
    cout<<4%5<<endl;
  
    // vector<int> v;
    // for (int i = 0; i < vect.size(); i++)
    // {
    //     for (int j = 0; j < vect[i].size(); j++)
    //     {
    //         v.push_back(vect[i][j]);
    //     }
    // }

    // int ind = 0;
    // vector<vector<int>> ans(r, vector<int>(c, 0));
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         ans[i][j] = v[ind];
    //         ind++;
    //     }
    // }




    /*
    Now we print the values that
    we just declared on lines
    14, 15 and 16 using a simple
    nested for loop.
    */
    // cout<<vect.size()<<endl;
    // cout<<vect[0].size()<<endl;

   

    return 0;
}
