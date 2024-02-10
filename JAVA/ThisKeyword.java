import java.util.*;

public class ThisKeyword {
    private int l, b, h;
    public ThisKeyword(int l, int b, int h){
        this.l = l;
        this.b = b;
        this.h = h;
    }
    public void getdata(){
        System.out.print(this.l+" ");
        System.out.println(this.b+" ");
        System.out.println(this.h+" ");
    }
    public static void main(String []args){
        ThisKeyword o = new ThisKeyword(10, 20, 30);
        o.getdata();
    }
}
