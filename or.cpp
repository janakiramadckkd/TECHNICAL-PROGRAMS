/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int a[n];
   long long  int i;
    for (i=0;i<n;i++)
    cin>>a[i];
    
    for (i=0;i<n-1;i++)
    {
        a[i]=a[i]|a[i+1];
        
    }
    
for (i=0;i<n;i++)
cout<<a[i]<<" ";
    return 0;
}

