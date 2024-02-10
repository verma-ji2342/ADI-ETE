import java.util.*;
public class constructor {
    private int l, b, h;
    public constructor(){
        l = 10;
        b = 20;
        h = 30;
    }
    
    public constructor(int a, int y, int c){
        l = a;
        b = y;
        h = c;
    }

    public void getdata(){
        System.out.print("Value of l : "+l);
        System.out.print("Value of b : "+b);
        System.out.print("Value of h : "+h);
        System.out.print("\n");
    }

    public static void main(String []arg){
        constructor c = new constructor();
        c.getdata();
        constructor c1 = new constructor(10, 1000, 8000);
        c1.getdata();
    }
}
