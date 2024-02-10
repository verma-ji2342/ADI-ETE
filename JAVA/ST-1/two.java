import java.util.*;

public class two {
    public static void main(String []args){
        ArrayList<Integer> arr = new ArrayList<Integer>();
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        for(int i=0 ; i<n ; i++){
            int t = sc.nextInt();
            arr.add(t);
        }
        Collections.rotate(arr, k);
        for(Integer x : arr){
            System.out.print(x + " ");
        }
    }
}
