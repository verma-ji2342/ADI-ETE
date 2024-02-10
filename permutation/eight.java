import java.util.*;

public class eight {
    public static void main(String []arg){
        Scanner sc = new Scanner(System.in);
        LinkedList<Integer> ll = new LinkedList<>();
        int data = sc.nextInt();
        while(data != -1){
            ll.add(data);
            data = sc.nextInt();
        }
        int num = sc.nextInt();
        int n = ll.size() - num + 1;

        ListIterator<Integer> it =  ll.listIterator();
        while(n != 1 && it.hasNext()){
            n--;
            it.next();
        }
        System.out.print(it.next());
    }
}
