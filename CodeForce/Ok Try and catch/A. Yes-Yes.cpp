#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli i, j;
 
#define pii pair<lli, lli>
#define vi vector<lli>
#define pb push_back
#define mp make_pair
#define yes cout << "YES" \
                 << "\n";
#define no cout << "NO" \
                << "\n";
#define SORT(v) sort(v.begin(), v.end());
#define R_SORT(v) sort(v.begin(), v.end(), greater<lli>());
#define endl "\n"
lli s;
 
bool SORT1(pair<lli, lli> p1, pair<lli, lli> p2)
{
    return p1.first < p2.first;
}
void solve()
{
 
    string s;
    cin>>s;
    vector<string>vs{"Yes","Ye","es","Y","e","s"};
    for(i=0;i<s.size();i++)
    {
        if(s[i]!='Y' && s[i]!='e' && s[i]!='s'){
            cout<<"NO"<<endl;
            return;
        }
    }

    for(i=0;i<s.size()-1;i++)
    {
        if(s[i]=='Y') 
        {
            if(s[i+1]!='e') {
                cout<<"NO"<<endl;
                return;
            }
        }
        else  if(s[i]=='e') 
        {
            if(s[i+1]!='s') {
                cout<<"NO"<<endl;
                return;
            }
        }
        else if(s[i]=='s') 
        {
            if(s[i+1]!='Y') {
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
    

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // cout<<"Case "<<l<<": ";
}