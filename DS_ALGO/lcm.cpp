#include <bits/stdc++.h>
using namespace std;
string s1, s2;
void longestCommonSubsequence(vector<vector<int>> &v1, int size1, int size2)
{

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (i == 0 || j == 0)/// v[1][0]=0
[]                v1[i][j] = 0;
            else if (s1[i] == s2[j])
                v1[i][j] = (1 + v1[i - 1][j - 1]);
            else
                v1[i][j] = max(v1[i - 1][j], v1[i][j - 1]);

        }
    }
}


vector<<vector<int>>togar(4,vector<int>(4));
int main()
{
    int s1_size, s2_size;
    cin >> s1 >> s2;
    s1_size = s1.size() + 1;
    s2_size = s2.size() + 1;
    vector<vector<int>> v1(s1_size, vector<int>(s2_size));
    longestCommonSubsequence(v1, s1_size, s2_size);
    cout << "Printng the matrix:\n";
    for (vector<int> vec : v1)
    {
        for( auto i : vec){
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl << "Longest Common Subsequence size: " << v1[s1_size-1][s2_size-1] << endl;
    return 0;
}
