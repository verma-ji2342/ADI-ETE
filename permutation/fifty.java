import java.util.*;

public class fifty {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []arr = new int[n];
        for(int i=0 ; i<n ; i++){
            arr[i] = sc.nextInt();
        }
        int ans=0;
        for(int i=0 ; i<n ; i++){
            ans += arr[i]/2;
        }
        System.out.println(ans);
    }
}
