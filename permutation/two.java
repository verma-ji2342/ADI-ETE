import java.util.*;

public class two {
    public static void main(String []args){
        LinkedList<String> ll = new LinkedList<>();
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=0 ; i<n ; i++){
            String s = sc.next();
            ll.add(s);
        }
        String target = sc.next();
        ListIterator it = ll.listIterator();
        while(it.hasNext()){
            if(target.compareTo((String)it.next()) >= 0){
                it.remove();
            }
        }
        for(String x : ll){
            System.out.print(x + " ");
        }
    }
}
