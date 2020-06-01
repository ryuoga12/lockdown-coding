import java.io.*; 
import java.util.*; 
public class Subarray1 {
	    private static int atMostK(int arr[], int n, int k) 
	    { 
	        int count = 0; 
	        int left = 0; 
	        int right = 0; 
	        HashMap<Integer, Integer> map = new HashMap<>(); 
	        while (right < n) { 
	            map.put(arr[right], map.getOrDefault(arr[right], 0) + 1); 
	            while (map.size() > k) { 
	                map.put(arr[left], map.get(arr[left]) - 1); 
	                if (map.get(arr[left]) == 0) 
	                    map.remove(arr[left]); 
	                left++; 
	            } 
	            count += right - left + 1; 
	            right++; 
	        } 
	        return count; 
	    } 
	    private static int exactlyK(int arr[], int n, int k) 
	    {       
	        return (atMostK(arr, n, k) - atMostK(arr, n, k - 1)); 
	    } 
	    public static void main(String[] args) 
	    { 
		Scanner s=new Scanner(System.in);
 		int k,n;
		System.out.print("Enter the size of array : ");
		n=s.nextInt();
		System.out.print("Enter the value of k : ");
		k=s.nextInt();
		int arr[]=new int[n];
		System.out.print("Enter array elements : ");
		for(int i=0;i<n;i++)
			arr[i]=s.nextInt();
	        System.out.print(exactlyK(arr, n, k)); 
	    } 
}
