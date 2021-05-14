#include <iostream>
using namespace std;
long long int N=1000001;
long long int s[1000001];
void sieve();

int main()
{
	sieve(); 		
     	long long int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<s[n]<<"\n";
	}
	return 0;
}

void sieve()
{
    for(int i=0;i<N;i++)    
    s[i]=1;
    s[0]=0;
    s[1]=0;		
    for(long int i=2;i*i<N;i++)
    {
	    if(s[i]==1)
	    {
		    for(int j=i*i;j<=N;j=j+i)
		    {
			    if(s[j]==1)
				s[i]=s[i]+1;	
		     	    s[j]=0;
		    }
	    }
    }
}
