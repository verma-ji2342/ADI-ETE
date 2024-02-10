import java.util.ArrayList;
import java.util.List;
import java.util.ListIterator;

public class Iterator {
    public static void main(String []args){
        List<Integer> l = new ArrayList<Integer>();
        l.add(10);
        l.add(20);
        l.add(30);
        l.add(40);

        ListIterator<Integer> it = l.listIterator(0);
        while(it.hasNext()){

            System.out.println(it.nextIndex());
            Integer x = it.next();
            it.set(x*2);
        }
        System.out.println(l);
    }
}
