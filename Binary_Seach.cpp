#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Binary_Search(int l,int u,int x,int a[])
{
    if(l>u)
    {
        return -1;
    }
   
    int m=(l+u)/2;
   // cout<<m<<"  ";
    if(a[m]==x)
    {
        return m;
    }
    else if(a[m]<x)
    {
        return Binary_Search(m+1,u,x,a);
    }
    else
    {
        return Binary_Search(l,m-1,x,a);
    }
}
int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<Binary_Search(0,n-1,x,a);
}