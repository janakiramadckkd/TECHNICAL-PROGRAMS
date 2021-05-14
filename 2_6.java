

import java.io.*;
import java.lang.Math;
import java.util.*;
 
class Main
{
   
    public static void primeFactors(int n)
    {
	int largest=n;
        int c=0;
        if (n%2==0)
        {
         
            n /= 2;
	largest=n;
        }

 
        
        for (int i = 3; i <= Math.sqrt(n); i+= 2)
        {
             c=0;

            if (n%i == 0)
            {
            
                n /= i;
            }
            if (c!=0 )          
		largest=i;
       
 }
                if (n > 2)
           
		largest=n;

System.out.println(largest);
    
    }
 
    public static void main (String[] args)
    {
Scanner s=new Scanner(System.in);
int t;
t=s.nextInt();
while(t>0)
{
    int n;
    n=s.nextInt();
     primeFactors(n);

     t--;
}

       
          
    }
}