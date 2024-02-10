import java.util.*;
import java.io.*;

public class streamMethod {
    public static void main(String [] args){
        List<Integer> li = new ArrayList<>();
        li.add(10);
        li.add(15);
        li.add(19);
        li.add(32);
        li.add(11);

        li.stream().filter(x -> x%2==0);  
        // write filter method along with stream otherwise it dosen't work
        li.forEach(System.out::println);
    }
}
