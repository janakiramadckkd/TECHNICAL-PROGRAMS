

import java.io.*;
import java.lang.Math;
import java.util.*;
 
class Main
{
   
    public static void primeFactors(int n)
    {

        int c=0;
        while (n%2==0)
        {
         c++;
            n /= 2;
        }
         System.out.print("2"+"^"+c);
 
        
        for (int i = 3; i <= Math.sqrt(n); i+= 2)
        {
             c=0;

            while (n%i == 0)
            {
               c++;
                n /= i;
            }
            if (c!=0 )
            System.out.print("*"+i+"^"+c);
        }
 
                if (n > 2)
            System.out.print("*"+n+"^"+"1");
    
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
     System.out.println("");
     t--;
}

       
          
    }
}