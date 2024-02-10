import java.util.Scanner;

public class RemoveDuplicates {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String ans = "";
        ans += s.charAt(0);
        for(int i=1 ; i<s.length() ; i++){
            if(s.charAt(i-1) != s.charAt(i)){
                ans += s.charAt(i);
            }
        }
        System.out.print(ans);
    }
}