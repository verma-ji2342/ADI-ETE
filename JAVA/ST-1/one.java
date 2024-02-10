import java.util.*;

public class one {
    public static void main(String []args){
        int []arr = new int[5];
        Scanner sc = new Scanner(System.in);
        for(int i=0 ; i<5 ; i++){
            arr[i] = sc.nextInt();
        }

        for(int i=1 ; i<5 ; i++){
            if(arr[i-1] > arr[i]){
                System.out.println("Not in sorted order");
                return ;
            }
        }
        System.out.println("Yes it is in sorted order");
        return ;
    }
}
