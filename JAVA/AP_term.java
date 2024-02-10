import java.util.*;
class AP_term{
    public static void main(String []arg){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int d = sc.nextInt();
        int n = sc.nextInt();
        int ans = Nth_term(a,d,n);
        System.out.println(ans);
    }
    public static int Nth_term(int a, int d, int n){
        int ans = a+(n-1)*d;
        return ans;
    }
}