import java.util.*;
public class NaturalNo {
    public static void main(String []arg){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int ans = n*(n+1)/2;
        System.out.println(ans);
    }
}
