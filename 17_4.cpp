#include <iostream>
#include<cmath>
using namespace std;
long int fact_max=100001;
long long int fact_arr[100001];
void fact_cal();


int main()
{
    fact_cal();
	int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<fact_arr[n]<<endl;
    }
    return 0;
}

void fact_cal()
{

fact_arr[0]=1;

long long int po=(pow(10,9))+7;
int c=0;
for (int i=1;i<100001;i++)
fact_arr[i]=(fact_arr[i-1]*i)%po;
}