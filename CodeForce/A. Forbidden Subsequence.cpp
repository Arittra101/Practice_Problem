
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



void solve2()
{

    string s,t;
    cin>>s>>t;
    map<char,lli>m;
    vector<char>v;

    sort(s.begin(),s.end());
    for(i=0;i<s.size();i++){

        if(s[i]>='d' && s[i]<='z')
            v.pb(s[i]);
        else
        m[s[i]]++;

    }

    if(t=="abc" && m['a']!=0 && m['b']!=0 && m['c']!=0){

        for(i=0;i<m['a'];i++)cout<<'a';
        for(i=0;i<m['c'];i++)cout<<'c';
        for(i=0;i<m['b'];i++)cout<<'b';
        SORT(v);
        for(i=0;i<v.size();i++)
            cout<<v[i];
    }
    else{
        for(auto it : m)
        {
            for(i=0;i<it.second;i++){
                cout<<it.first;
            }
        }
        for(i=0;i<v.size();i++)cout<<v[i];
    }

    cout<<endl;


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
        solve2();
    }

    return 0;
}


