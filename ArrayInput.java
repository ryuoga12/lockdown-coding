import java.util.*;
import java.io.*;
public class ArrayInput {
	  public static void main(String[] args) {
	      Scanner sc = new Scanner(System.in); 
	      System.out.println("Enter the length of the array:");
	      int length = sc.nextInt(); 
	      System.out.println("enter the elements:");
	      int[] name = new int[length];
	      int sum=0;
	try{	  
	  for(int i = 0 ; i < name.length ; i++)
	  {  
	 	 name[i] = sc.nextInt();
		 sum += name[i];
	  } 
	  System.out.print(sum);
	}
	catch(InputMismatchException e){	 
	  System.out.print("You entered bad data.");
	}
   }
}
