
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
    string time,c_hour,c_minute;
    cin>>time;
    lli h=0,m=0;
    char h2 = time[1] - '0';
    for(i=0; i<2; i++)
    {
        char h1 = time[i] - '0';
        h = h*10 + h1;
        char m1 = time[3+i] - '0';
        m = m*10+m1;
    }

    // cout<<h<<" "<<m<<endl;

    lli m_h = m/5;
     lli m_md =  m%5;
    lli  h_m = h*5+m_md;

    c_hour =to_string(m_h);
    c_minute =to_string(h_m);

    if(m_h==0) c_hour = "12";
    if(h_m==60) c_minute = "00";

    cout<<c_hour<<":"<<c_minute<<endl;

    }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli t,l=0;
    cin>>t;
    while(t--)
    {
        l++;
        //cout<<"Case "<<l<<": ";
        solve();
    }

    return 0;
}


