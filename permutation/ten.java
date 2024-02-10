import java.util.*;

public class ten {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        // String []arr = str.split(" ");
        int i=0, j=str.length()-1;
        while(i < str.length() && j >= 0){
            if(str.charAt(i) == ' '){
                System.out.print(" ");
                i++;
            }
            else if(str.charAt(j) == ' '){
                j--;
            }
            else{
                System.out.print(str.charAt(j));
                j--;
                i++;
            }
        }
    }
}
