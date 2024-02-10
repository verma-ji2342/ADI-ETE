import java.util.*;
public class three {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();

        String []arr = str.split(" ");
        int ans=0;
        for(String x : arr){
            ans = Integer.max(ans, x.length());
        }
        System.out.println(ans);
    }
}
