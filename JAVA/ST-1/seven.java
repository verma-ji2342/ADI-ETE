import java.util.*;

public class seven {
    public static void main(String []ar){
        int []arr = new int[5];
        Scanner sc = new Scanner(System.in);
        for(int i=0 ; i<5 ; i++){
            arr[i] = sc.nextInt();
        }
        System.out.println("Enter the targeted element : ");
        int t = sc.nextInt();
        for(int i=0 ; i<4 ; i++){
            for(int j=i+1 ; j<5 ; j++){
                // System.out.println(i + " " +j );
                if(arr[i] + arr[j] == t){
                    System.out.println(i + " " +j );
                    return ;
                }
            }
        }
        System.out.println(-1);
    }
}
