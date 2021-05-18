#include <iostream>
#include <algorithm>
using namespace std;
 void reverse(int a[], int n) {
    reverse(a, a + n);
}
 
int main()
{
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
    cin>>a[i];
    reverse(a, n);
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
 
    return 0;
}