#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int n, a, t;
    cin >> t;
    while(t--){
        cin >> str;
        n = str.size();
        if(str[n-1] == '1' || str[n-1] == '9') a = 1;
        else if(str[n-1] == '2' || str[n-1] == '8') a = 4;
        else if(str[n-1] == '3' || str[n-1] == '7') a = 9;
        else if(str[n-1] == '4' || str[n-1] == '6') a = 6;
        else if(str[n-1] == '5') a = 5;
        else if(str[n-1] == '0') a = 0;
        cout << a << endl;
    }
    return 0;
}
