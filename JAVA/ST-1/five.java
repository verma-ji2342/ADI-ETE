import java.util.*;

public class five {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        int m=sc.nextInt();
        int n=sc.nextInt();
        int [][]arr = new int[m][n];
        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                arr[i][j] = sc.nextInt();
            }
        }
        System.out.println("Enter the element you want to search : ");
        int ele = sc.nextInt();
        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                if(arr[i][j] == ele){
                    System.out.println("Element is found");
                    return ;
                }
            }
        }
        System.out.println("Element is not found ");
        return ;
    }
}
