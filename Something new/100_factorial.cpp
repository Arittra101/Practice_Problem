#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

#define vec vector<int>
#define pb push_back
#define MAX 300

int factorial_maker(int n,int size,int v[]){

    int carry = 0;

    for(int i=0;i<size;i++)
    {
        int product = v[i]*n+carry;
        v[i] = product%10;
        carry = product/10;
    }
    while(carry)
    {
        v[size] = carry%10;   //you cann't use only carry ,,suppose in some case your carry will 18 or 2^64 nuumber..at that time you may face overflow problem
        size++;
        carry=carry/10;
    }
    return size;
}
void factorial(int n)
{
    int size =1;
    int v[MAX];
    v[0]=1;

    for(int i=2;i<=n;i++)
       size = factorial_maker(i,size,v);

    for(int i=size-1;i>=0;i--)
        cout<<v[i];
}


int main()
{
    cout<<"Enter the Number of factorial"<<endl;
    int n;
    cin>>n;
    factorial(n);
}

