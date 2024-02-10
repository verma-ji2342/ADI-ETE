import java.util.*;

public class twentyone {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []arr = new int[n];
        for(int i=0 ; i<n ; i++){
            arr[i] = sc.nextInt();
        }
        int k = sc.nextInt();
        int x = sc.nextInt();
        print(arr,x,k,n);
    }

    static int search(int arr[], int low, int high, int x)
    {
        if (arr[high] <= x) 
            return high;
        if (arr[low] > x)  
            return low;
 

        int mid = (low + high)/2;  
        if (arr[mid] <= x && arr[mid+1] > x)
            return mid;
 
        if(arr[mid] < x)
            return search(arr, mid+1, high, x);
 
        return search(arr, low, mid - 1, x);
    }

    static void print(int arr[], int x, int k, int n)
    {

        int l = search(arr, 0, n-1, x);
        int r = l+1;   
        int count = 0; 
                      
 
    

        if (arr[l] == x) l--;
 

        while (l >= 0 && r < n && count < k)
        {
            if (x - arr[l] < arr[r] - x)
                System.out.print(arr[l--]+" ");
            else
                System.out.print(arr[r++]+" ");
            count++;
        }
 

        while (count < k && l >= 0)
        {
            System.out.print(arr[l--]+" ");
            count++;
        }
 
 

        while (count < k && r < n)
        {
            System.out.print(arr[r++]+" ");
            count++;
        }
    }
}
