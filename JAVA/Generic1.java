import java.util.*;

class example {
    public <E> void print(E []s){
        for(int i=0 ; i<s.length ; i++){
            System.out.println(s[i]);
        }
    }
    // public void print(Integer []x){
    //     for(Integer i : x){
    //         System.out.println(i);
    //     }
    // }
}

public class Generic1 {
    public static void main(String []args){
        String countries[] = new String[]{"India", "Pakistan", "England"};
        example e1 = new example();
        Integer i[] = new Integer[]{1,2,3,4,5,6,7};
        e1.print(countries);
        e1.print(i);
    }
}