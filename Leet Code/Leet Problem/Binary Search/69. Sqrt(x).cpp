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


int solve(int x)
{

    long long int left=0,right = x;
    long long int mid;
    while(left+1<right)
    {
        mid =  (right-left)/2 + left;
        if(mid*mid==x) return mid;
        else if(mid*mid>x)right = mid;
        else if(mid*mid<x) left  = mid;

    }
    if(right*right==x)return right;
    return  left;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x;
    cin>>x;
    cout<<solve(x);
    return 0;
}
