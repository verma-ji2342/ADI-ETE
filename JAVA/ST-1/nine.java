import java.util.*;

public class nine {
    public static void main(String []arg){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(fibonacci(n));
    }

    public static int fibonacci(int n){
        if(n == 1) return 0;
        if(n == 2) return 1;
        if(n == 3) return 1;

        return fibonacci(n-1)+fibonacci(n-2);
    }
}
