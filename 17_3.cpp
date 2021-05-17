#include <iostream>
using namespace std;
int main()
 {
	int test;
	cin>>test;
for(;test>0;test--) 
    {
        long long int n;
        cin>>n;
        int m = 0,sb=0;
     for (int i = n; i; i >>= 2) 
    {
                if (i & 1)
                sb += (1 << m);
           m =m+2;
    }
 
    cout<< n - sb<<endl;
    }
    return 0;
 }