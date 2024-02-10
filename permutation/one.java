import java.util.*;

public class one {
    public static void main(String []args){
        LinkedList<Integer> ll = new LinkedList<>();
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=0 ; i<n ; i++){
            int data = sc.nextInt();
            ll.add(data);
        }
        Collections.reverse(ll);
        for(int x : ll){
            System.out.print(x + " ");
        }
    }
}
