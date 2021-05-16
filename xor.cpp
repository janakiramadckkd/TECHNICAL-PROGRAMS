
#include <iostream>
using namespace std;
int main()
{
long int i,j,k,n,c=0,max;
cin>>n;
long int a[n];

for(i=0;i<n;i++)
cin>>a[i];

int ans = INT_MIN;     
 
  
    for (int i=0; i<n; i++)
    {
        int loc_xor = 0; 
 

        for (int j=i; j<n; j++)
        {
            loc_xor = loc_xor ^ a[j];
            ans = max(ans, loc_xor);
        }
    }
cout<<ans;
return 0;
}
