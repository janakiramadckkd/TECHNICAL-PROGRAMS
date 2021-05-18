#include <iostream>
#include <algorithm>
using namespace std;
 void reverse(int a[], int l,int r) {
    
if (l>r)
return;

std::swap(a[l],a[r]);
reverse(a,l+1,r-1);
}
 
int main()
{
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
    cin>>a[i];
    reverse(a, 0,n-1);
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
 
    return 0;
}