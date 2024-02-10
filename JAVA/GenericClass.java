
class Mydata <T> {
    T i;
    public void add(T x){
        i=x;
    }
    public T get(){
        return i;
    }
}

public class GenericClass {
    static public void main(String []args){
        Mydata <Integer> m1 = new Mydata <Integer>();
        Mydata <String> m2 = new Mydata <String> ();
        Integer k = 8;
        m1.add(k);
        m2.add("Pranjal");
        System.out.println("m1 "+m1.get()+" m2 "+m2.get());
    }
}
