
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


void solve(vector<int>& v, int start, int destination)
{
    int temp=INT_MAX;
    vector<int>::iterator it;
    int sum=0,sum1=0;
    it = v.begin()+start;
    while(1)
    {
        //approach front

        if(it==v.end())
        {
            it =v.begin();
        }
        int pr_v=*it;
        if(abs(v.begin()-it)==destination)
            break;
        it++;
        sum+=pr_v;

    }
    // cout<<sum<<endl;
    it = v.begin()+start;
    while(1)
    {
        //approach
        // cout<<abs(v.begin()-it)<<endl;
        if(abs(v.begin()-it)==destination)
            break;

        else
        {

            it--;
            if(it==v.begin()-1)
                it =v.end()-1;
            //cout<<*it<<endl;
            int pr_v = *it;
            sum1+=pr_v;

        }
    }
    //cout<<sum1<<endl;
    cout<<min(sum,sum1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int>v{1,2,3,4};
    solve(v,0,1);
    return 0;
}


