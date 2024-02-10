import java.util.*;

public class four {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> arr = new ArrayList<Integer>();
        int n = sc.nextInt();
        for(int i=0 ; i<n ; i++){
            int t = sc.nextInt();
            arr.add(t);
        }
        Collections.reverse(arr);
        for(Integer x : arr){
            System.out.print(x + " ");
        }
    }
}