
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
    int t,t1;
    cin>>t>>t1;
    char a[25][25];

    // vector<string>a[t1];


    for(int i=0; i<t1; i++)
    {
        scanf("%s",&a[i]);

    }
    //  cout<<endl;
    //cout<<a[0][1];
    int c=0;
    for(int i=0; i<t; i++)
    {
        for(int j=0; j<t1; j++)
        {
            if(a[i][j]=='.' && a[i][j+1]!='*'&& a[i][j-1]!='*'&& a[i+1][j]!='*'&& a[i-1][j]!='*')
            {
                c++;

            }
        }
    }
    cout<<c;
}
int main()
{

    lli t,l=0;


    solve();


    return 0;
}

