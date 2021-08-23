
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
//lli i,j;

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
        lli n,x;
         cin>>n;
        vector<int>v(3,0);
        vector<int>:: iterator it;
        lli avg=n/3;
        for(int i=0; i<n; i++)
        {
            cin>>x;

            if(x%3==0)
            {
                v[0]+=1;
            }
            else if(x%3==1)
            {
                v[1]+=1;
            }
            else if(x%3==2)
            {
                v[2]+=1;
            }
        }
       //v[1]=30,v[2]=10,v[0]=5;
        it = max_element(v.begin(),v.end());
        lli index = abs(it-v.begin());
        //cout<<index<<endl;
        lli max = v[index];
        lli min;
        lli sum=0;


        if(index==2)
        {
            it = v.begin();
            min = *it;
        }
        else
        {
            min = v[index+1];
        }

        if(max==avg)
            cout<<0<<endl;
        else
        {
            lli temp = abs(max-avg);
            sum+=temp;

            min+=temp;
            temp = abs(min-avg);
            if(temp)
                sum+=temp;
            cout<<sum<<endl;

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

