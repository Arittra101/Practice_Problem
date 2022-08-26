
#include<bits/stdc++.h>

using namespace std;
typedef long long int lli;
lli i,j;


void solve()
{
    lli n;
    cin>>n;
    string s;
    cin>>s;
    std::for_each(s.begin(), s.end(), [](char & c)
    {
        c = ::toupper(c);
    });
    lli flag=0;
    if(n%2!=0)
    {
        lli mid = n/2;
        if(s[mid]=='0')
        {
            char ch = s[0];
            char ch1;
            if(n>1)
            ch1 = s[mid+1];
            for(i=1; i<mid; i++)
            {
                    if(ch!=s[i]||ch1!=s[mid+1+i])
                    {
                        flag = 1;

                        break;
                    }
                    //else fla

            }

            if(flag==1)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}


