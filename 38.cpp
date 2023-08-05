#include <bits/stdc++.h>
using namespace std;
bool power(long long int n)
{
    if(n==0) return 0;
    else 
    return ((n&(n-1))==0);
}
int main()
{
    long long int n;
    cout<<"Enter your number"<<endl;
    cin>>n;
    cout<<power(n);
    
    
}