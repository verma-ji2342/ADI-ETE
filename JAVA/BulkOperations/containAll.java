import java.util.*;

public class containAll {
    static public void main(String[] args) {
        List<Integer> list1 = new ArrayList<Integer>();
        list1.add(10);
        list1.add(20);
        list1.add(30);

        List<Integer> list2 = new ArrayList<Integer>();
        list2.add(10);
        list2.add(20);
        list2.add(50);

        System.out.println("containAll() Method : ");
        System.out.println(list1.containsAll(list2));
        System.out.println();
        System.out.println("addAll() Method : ");
        list1.addAll(list2);
        System.out.println(list1);

        List<Integer> list3 = new ArrayList<Integer>();
        list3.add(10);
        list3.add(20);
        list3.add(30);

        List<Integer> list4 = new ArrayList<Integer>();
        list4.add(10);
        list4.add(20);
        list4.add(50);
        list4.add(70);
        System.out.println();
        System.out.println("remmoveAll() Method : ");
        list3.removeAll(list4);
        System.out.println(list3);
        System.out.println();
        List<Integer> list5 = new ArrayList<Integer>();
        list5.add(10);
        list5.add(20);
        list5.add(30);

        List<Integer> list6 = new ArrayList<Integer>();
        list6.add(10);
        list6.add(20);
        list6.add(50);

        System.out.println("retainAll() Method : ");
        list5.retainAll(list6);
        System.out.println(list5);
        System.out.println();
        System.out.println("removeIf() Method : ");
        System.out.println("Initailly list : " + list6);
        list6.removeIf(n -> (n > 20));
        System.out.println(list6);

    }
}
