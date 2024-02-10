import java.util.Scanner;

public class Replace {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        char k = sc.nextLine().charAt(0);
        char p = sc.nextLine().charAt(0);
        String ans = s.replace(k,p);
        System.out.println(ans);
    }
}
