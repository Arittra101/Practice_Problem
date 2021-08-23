
#include<bits/stdc++.h>
using namespace std;
typedef  int lli;
lli i,j;

#define pii  pair<lli, lli>
#define vi vector<lli>
#define pb push_back
#define mp make_pair
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define en "\n"

// reverse binary -> lli res = 0; while(n>0){ res <<= 1; res = res(n & 1); n >>= 1;}
// decimal to binary string -> string s = bitset<N>(n).to_string();
// binary string to decimal -> lli n = bitset<N>(s).to_ullong();
// Case output -> cout << "Case " << j << ": " << mx << endl;




void solve()
{

    lli t;
    cin>>t;
    while(t--)
    {
        lli n;
        vi v,v1,v3;
        cin>>n;
        lli c=1;
        lli sum=0,sum1=0;
        vector<pair<lli,lli>>p;
        for(i=0; i<n; i++)
        {
            lli x;
            cin>>x;
            v.pb(x);
            sum+=x;
        }
        for(i=0; i<n; i++)
        {
            lli x;
            cin>>x;
            v1.pb(x);
            sum1+=x;
        }
        if(sum!=sum1)
            cout<<"-1"<<endl;

        else
        {
            for(i=0; i<n; i++)
            {
                if(v[i]>v1[i])
                {

                    for(j=0; j<n; j++)
                    {
                        if(i!=j)
                        {
                            lli a = abs(v[i]-v1[i]);
                            if(v[j]<v1[j])
                            {
                                lli s =  abs(v[j]-v1[j]);
                                lli d = abs(a-s);
                                if(d==0)
                                {
                                    // cout<<"As";
                                    d = s;
                                }
                                //cout<<"D: "<<d<<" "<<s<<" "<<a<<" ";
                                v[j]+=d;
                                v[i]-=d;
                                //cout<<"D";
                                while(d--)
                                {
                                    p.pb(make_pair(i+1,j+1));

                                }

                                /* for(auto it : v)
                                 {
                                     //cout<<it.first<<it.second<<endl;
                                     cout<<it;
                                 }
                                 cout<<endl;*/
                            }
                        }

                    }

                }
            }
            v.clear();
            v1.clear();
            if(p.size()>0)
            {
                cout<<p.size()<<endl;
                for(auto it : p)
                {
                    cout<<it.first<<" "<<it.second<<endl;
                    //cout<<it;
                }
            }
            else cout<<0<<endl;

            p.clear();

        }

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

