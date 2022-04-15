
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
    vector<pair<lli,lli>>v;
    vi v1;
    vi ansv;

    lli c=0;
    string s;
    cin>>s;
    lli sz =  s.size();

    for(i=0; i<sz; i++)
    {
        lli ic =  s[i]-'0';
        v.pb(make_pair(ic,i));
        v1.pb(ic);
    }

    lli flag=0;
    sort(v.rbegin(),v.rend());
    if(v[0]==v[1] && v[0]<=v[sz-1])
        flag=1;

    // cout<<sz<<endl;
    for(i=0; i<sz; i++)
    {
        if(v1[i]<v[i].first)
        {
            lli tmp= v[i].second;

            for(j=i+1; j<sz; j++)
            {
                if(flag==1)
                {
                    if(v1[i]!=v[j].first)
                    {
                        v[j-1].second = tmp;
                        flag=0;
                        break;
                    }
                }
                if(v1[i]==v[j].first && flag == 0)
                {

                    // cout<<"S";
                    v[j].second = tmp;
                    break;
                }
            }
            swap(s[i],s[tmp]);
            swap(v1[i],v1[tmp]);
//            for(int k=0;k<sz;k++)
//            {
//              //  cout<<v[k].first<<v[k].second<<endl;
//            }

            c++;
            //v[i].first=v1[i];
            if(c==2)
            {
                //cout<<c;
                cout<<s<<endl;
                return;

            }
            // cout<<v[i].first<<v[i].second<<endl;
        }


    }
    if(c==0)
    {
        cout<<s<<endl;
    }
    else
    {
        swap(s[sz-1],s[sz-2]);
        cout<<s<<endl;
    }
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

