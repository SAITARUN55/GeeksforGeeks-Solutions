import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		Scanner sc=new Scanner(System.in);
		int t,i,j,max,maxI,c;
		t=sc.nextInt();
		for(i=0;i<t;i++)
		{
		   int n=sc.nextInt();
		    sc.nextLine();
		    max=0;maxI=0;
		    String arr[]=new String[n];
		    j=0;
		    while(j<n)
		    {
		        arr[j]=sc.nextLine();
		        c=arr[j].length();
		        
		        if(c>max)
		        {
		            max=c;
		            maxI=j;
		        }
		        j++;
		       
		    }
		
		    	System.out.println(arr[maxI]);
		}
	}
}
