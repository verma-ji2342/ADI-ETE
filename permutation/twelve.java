import java.util.*;


public class twelve {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        String ans="";
        for(int i=0 ; i<str.length()-1 ; i = i+2){
            if(str.charAt(i) > str.charAt(i+1)){
                char t = str.charAt(i);
                ans += t;
            }
            else{
                ans += str.charAt(i+1);
            }
        }
        if(str.length()%2 != 0){
            ans += str.charAt(str.length()-1);
        }
        System.out.println(ans);
    }    
}
