
import java.io.*;
import java.util.*;



public class WildCard{

    
        static void removeEven(Collection<?> C)
        {
            Iterator<?> it= C.iterator();  // This code is correct anyhow this will an error

            while(it.hasNext())
            {
                int x = (Integer)it.next();
                if(x%2 == 0)
                it.remove();
            }
            
        }
    
    public static void main (String[] args) {
		
		Collection<Integer> C = new ArrayList<Integer>();

        C.add(10);
        C.add(15);
        C.add(20);

        removeEven(C);
        
        System.out.println(C);

    }
}