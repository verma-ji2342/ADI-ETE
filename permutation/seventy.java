import java.util.*;

public class seventy {
    public static void main(String []args){
        ArrayList<String> arr = new ArrayList<>();
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        permute(str, "", arr);
        Collections.sort(arr);
        System.out.println(arr);
    }

    public static void permute(String s, String ans, ArrayList<String> arr){
        if(s.length() == 0){
            arr.add(ans);
            return ;
        }

        permute(s.substring(1), ans + s.charAt(0), arr);
        permute(s.substring(1), ans, arr);
    }
}
