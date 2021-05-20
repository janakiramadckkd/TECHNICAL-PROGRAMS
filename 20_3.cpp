#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,j,k,n1,n2,flag;
int c=0;

cin>>n1;
int a[n1];
for(i=0;i<n1;i++)
cin>>a[i];

cin>>n2;
int b[n2];
for(i=0;i<n2;i++)
cin>>b[i];

cout<<"[";
for (i=0;i<n1;i++)
{
int max=a[i];
flag=0;
for (j=0;j<n2;j++)
{
if (b[j]>max)
{
max=b[j];
flag=1;
break;
}
}


if (flag==1)
{
if (c<=n1-2)
{
cout<<max<<",";
c++;
}
else
cout<<max;


for(k=j;k<n2-1;k++)
b[k]=b[k+1];
n2--;
}

else
{
int max=a[i];
for (j=0;j<n2;j++)
{
if (max==b[j])
{
if (c<=n1-2)
{
cout<<"-1"<<",";
c++;
}
else
cout<<"-1";

for(k=j;k<n2-1;k++)
b[k]=b[k+1];
n2--;
break;
}

}
}

}
cout<<"]";
return 0;
}

