import java.util.*;

public class BinarySearch{
    public static void ddff main(String []args){
        int arr[] = {1,55,63,41,55,22,3,5};
        Arrays.sort(arr);
        int i=0, j=arr.length-1;
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        while(i < j){
            int mid = (i+j)/2;
            if(arr[mid] == n) {
                System.out.println("Number is Found");
                return ;
            }

            else if(arr[mid] < n){
                i = mid+1;
            }
            else {
                j = mid-1;
            }
        }
        System.out.println("Number is not found in the array!");
    }
}