
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


bool isprime(lli num)
{
    lli flag  = 0;
    for(j=2; j<num; j++)
    {
        if(num%j==0)
        {
            flag = 1;
            return false;
        }
    }
    return true;

}
void solve()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli l;
        string n;
        cin>>l>>n;
        lli flag=0;
        for(i=0; i<n.size(); i++)
        {
            if(n[i]=='1'||n[i]=='4'||n[i]=='6'||n[i]=='8'||n[i]=='9')
            {
                cout<<1<<endl<<n[i]<<endl;
                flag = 1;
                break;
            }
        }
        if(flag==0)
        {   int flag1= 0;
            for(i=0; i<l-1; i++)
            {
                lli n1 = n[i]-'0';
                lli n3=n1*10;
                for(int j=i+1; j<n.size(); j++)
                {

                    lli n2 = n3+ (n[j]-'0');
                   // cout<<n[i]<<endl;
                    if(!isprime(n2))
                    {

                        cout<<2<<endl<<n2<<endl;
                        flag1=1;
                        break;
                    }
                }
                if(flag1==1)break;

            }
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


