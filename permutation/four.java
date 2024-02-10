import java.util.*;

public class four {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        String ans="";
        for(int i=0 ; i<str.length()-1 ; i++){
            if(str.charAt(i) != str.charAt(i+1)){
                char t=str.charAt(i);
                ans=ans+t;
            }
        }
        ans += str.charAt(str.length()-1);
        System.out.println(ans);
    }    
}
