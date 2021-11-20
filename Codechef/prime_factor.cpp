
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli i,j;
vector<lli>prime;
#define pii  pair<lli, lli>
#define vi vector<lli>
#define pb push_back
#define mp make_pair
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define SORT(v) sort(v.begin(),v.end());
#define R_SORT(v) sort(v.begin(),v.end(),greater<lli>());
#define en "\n"

void prim()
{
    for(i=2; i<=10000; i++)
    {
        lli  flag = 0;
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }

        }
        if(flag==0) prime.pb(i);
    }
}


void solve()
{
    lli t;
    cin>>t;

    prim();
    //for(auto it : prime)cout<<it<<endl;
    while(t--)
    {
        lli num;
        cin>>num;
        lli c =0;
        i=0;
        set<lli>s;
        while(i<prime.size())
        {
            if(num<prime[i])break;
            if(num%prime[i]==0)
            {
                num/=prime[i];
               //cout<<prime[i]<<" ";
                s.insert(prime[i]);

            }
            else
            i++;

        }
        cout<<s.size()<<endl;




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
/*
int main()
{
  	int n,num,j,count=0;
	scanf("%d",&n);
	while(n--){
	    scanf("%d",&num);
	    count=0;
	    for (j=2;j<=num;j++){
	        if (num%j==0) count++;
	        while(num%j==0){
	            num=num/j;
	            cout<<j<<" ";
	        }
	    }
	    printf("%d\n",count);
	}
	return 0;
}
*/
