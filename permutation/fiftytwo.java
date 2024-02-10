import java.util.*;


public class fiftytwo {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int i=1;
        int ans=0;
        while(i <= n){
            ans += Integer.bitCount(i);
            i++;
        }
        System.out.println(ans);
    }
}
