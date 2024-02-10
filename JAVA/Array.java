import java.util.*;

public class Array {
    public static void main(String []args){
        int n;
        System.out.println("Enter the number of element in Array : ");
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int []arr = new int[n];
        System.out.println("\nEnter the elements of array one by one\n");
        for(int i=0 ; i<n ; i++){
            arr[i] = sc.nextInt();
        }
        System.out.println("Here the elements of array which you enetered : \n");
        for(int i=0 ; i<n ; i++){
            System.out.println(arr[i]+" ");
        }
    }
}
