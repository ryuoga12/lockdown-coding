import java.util.*;
import java.io.*;
public class Sort1{
	public void sort(int a[],int n) {
		int i,j;
		for(i=0;i<n-1;i++)
			for(j=0;j<n-1-i;j++)
				if(a[j]>a[j+1]) {
					int t=a[j];
					a[j]=a[j+1];
					a[j+1]=t;
				}
		System.out.print("The array after sorting is : ");
		for(i=0;i<n;i++)
			System.out.print(a[i]+" ");
	}
	public static void main(String []args) {
		Scanner s=new Scanner(System.in);
		Sort1 p=new Sort1();
		int t,n,i;
		System.out.print("Enter the number of testcases : ");
		t=s.nextInt();
		while(t>0) {
			System.out.print("\nEnter array size : ");
			n=s.nextInt();
			int a[]=new int[n];
			System.out.print("Enter array elements containing only 0s,1s and 2s : ");
			for(i=0;i<n;i++) 
				a[i]=s.nextInt();
			p.sort(a,n);
			t--;
		}
	}
}
