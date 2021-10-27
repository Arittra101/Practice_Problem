
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


void solve()
{
    lli t;
    cin>>t;
    while(t--)
    {
        string num;
        cin>>num;
        lli mn =INT_MAX;
        lli n= num.size();
        for(i=0;i<num.size()-1;i++)
        {
            for(j=i+1;j<num.size();j++)
            {
                lli num1  =  (num[i]-'0')*10+ (num[j]-'0');

                if(num1 % 25==0)
                {
                    //cout<<num1<<" d"<<endl;
                    lli dif = (j-i-1) +  (n-1-j);
                     mn = min(dif,mn);
                }
            }
        }
        cout<<mn<<endl;
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
