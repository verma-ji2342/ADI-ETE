import java.util.*;

public class five {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int X = sc.nextInt();
        int []a = new int[n];
        int []b = new int[n];

        for(int i=0 ; i<n ; i++){
            a[i] = sc.nextInt();
        }

        for(int i=0 ; i<n ; i++){
            b[i] = sc.nextInt();
        }
        int cost = 0;
        for(int i=0 ; i<n ; i++){
            if(a[i] >= X){
                cost += b[i];
            }
        }
        System.out.println(cost);
    }   
}
