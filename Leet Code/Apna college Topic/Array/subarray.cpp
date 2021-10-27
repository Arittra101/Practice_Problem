
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


void max_length_subarray(vector<int>& a)
{
    lli mx = INT_MIN;
    lli pv = abs(a[0]-a[1]);
    j = 2;
    lli cnt=2;
    while(j<a.size())
    {

        if(a[j]-a[j-1]==pv)
        {
            cnt++;
        }
        else
        {

            mx = max(mx,cnt);
            pv = abs(a[j]-a[j-1]);
            cnt=2;
        }
        j++;   //2->3->4->5   6(break)
    }
    cout<<mx;

}
void target_break(vector<int>&v)
{
    j = 1;
    lli mx = v[0];
    lli cnt = 1;
    while(j<v.size()-1)
    {
        if(v[j]>mx && v[j]>v[j+1])
        {
            cnt++;
            mx = v[j];
            cout<<mx<<endl;

        }
        j++;

    }
    if(mx<v[v.size()-1])
        cnt++;

    cout<<cnt-1;



}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int>v{1,2,0,7,2,0,2,2};
   // max_length_subarray(v);
    target_break(v);
    return 0;
}


