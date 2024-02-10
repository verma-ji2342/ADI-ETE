import java.util.*;

public class sixtythree {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        int n = sc.nextInt();
        if(n >= str.length()){
            System.out.println(-1);
            return ;
        }
        StringBuilder ans1 = new StringBuilder();
        StringBuilder ans2 = new StringBuilder();
        for(int i=0 ; i<n ; i++){
            ans1.append(str.charAt(i));
        }
        for(int i=n ; i<str.length() ; i++){
            ans2.append(str.charAt(i));
        }
        ans2.reverse();
        ans1.reverse();
        System.out.println(ans2+""+ans1);
    }
}
