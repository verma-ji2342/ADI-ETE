import java.util.*;

public class eight {
    public static void main(String [] ar){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int temp = n;
        int rev=0;
        while(temp != 0){
            int r = temp%10;
            rev = rev*10 + r;
            temp /= 10;
        }
        if(rev == n){
            System.out.println("Yes it is palindrome");
        }
        else{
            System.out.println("it is not palindrome");
        }
    }
}
