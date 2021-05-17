#include <iostream>
using namespace std;

int main()
 {
     int n,result;
 result= 0;
cin>>n;
while (n>0 )
{
    n = n & (n<<1);
    result=result+1;
}
cout<<result;
	return 0;
}
