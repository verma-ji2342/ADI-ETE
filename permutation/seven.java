import java.util.*;

public class seven {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        String []arr = str.split(" ");
        for(String x : arr){
            System.out.print(x);
        }
    }
}
