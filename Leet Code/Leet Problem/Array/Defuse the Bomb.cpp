
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

void solve(vector<int>& v, int k)
{
    int i,size =  v.size();
    vector<int>:: iterator it;
    vector<int>v1(size,0);
    int g;
    if(k==0) return v1;
    if(k<0)
        g = 1;
    else g=0;
    k = abs(k);
    int ans;
    for(i=0; i<size; i++)
    {
        ans = 0;
        int l=0;
        if(g==0)
        {
            g=0;
            it = v.begin()+i+1;

            while(l<k)
            {
                if(it == v.end())
                    it = v.begin();

                ans+=*it;
                cout<<ans<<" "<<*it<<endl;
                it++;
                l++;

            }
        }
        else if(g==1)
        {
            it = v.begin()+i;
            it--;
            while(l<k)
            {
                if(it < v.begin())
                    it = v.end()-1;
                ans+=*it;
                cout<<ans<<" "<<*it<<endl;
                it--;
                l++;
            }
        }

        v1[i] = ans;
    }
    return v1;
    //for(auto it1:v1)
    // cout<<it1<<" ";


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int>v{2,4,9,3};

    solve(v,-2);
    return 0;
}


