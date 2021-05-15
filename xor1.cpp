
#include <iostream>
using namespace std;
int main()
{
long int i,j,k,n,c=0,max;
cin>>n;
long int a[n];

for(i=0;i<n;i++)
cin>>a[i];

max=a[0]^a[0];
int pos1,pos2;
pos1=0;
pos2=0;

 for ( i = 0; i < n; i++)
 {
 for ( j = i; j < n; j++) 
{
 k=a[i]^a[j];

if (k>max)
{
    max=k;
pos1=i;
pos2=j;
}
}
}
k=a[pos1]^a[pos2];
cout<<k;
return 0;
}
