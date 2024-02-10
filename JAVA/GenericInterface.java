import java.util.*;

interface Gener <T>{
    void setData(T a);
    T getData();
}
class Example <T> implements Gener <T>{
    private T i;
    public void setData(T x){
        i=x;
    }
    public T getData(){
        return i;
    }
}

public class GenericInterface {
    public static void main(String []args){
        Example <Integer> e2 = new Example <Integer>();
        Example <String> e1 = new Example <String>();
        e2.setData(10);
        e1.setData("Pranjal Verma");
        System.out.println(e1.getData());
        Integer value = e2.getData();
        System.out.println(value);
    }
}
