#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    int c=0;
    while(n>0)
    {
        if (n%2!=0)
        c++;
        n/=2;
    }

cout<<c;    
}