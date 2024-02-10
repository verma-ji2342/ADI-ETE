import java.util.*;

public class three {
    public static void main(String[] args) {
        ArrayList<Integer> arr = new ArrayList<Integer>();
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        for (int i = 0; i < n; i++) {
            int t = sc.nextInt();
            arr.add(t);
        }

        for(int i=0 ; i<k ; i++){
            int ele = arr.get(0);
            arr.add(ele);
            arr.remove(0);
        }

        for(Integer x : arr){
            System.out.print(x + " ");
        }
        System.out.println(Collections.binarySearch(arr, 4, null));
    }
}
