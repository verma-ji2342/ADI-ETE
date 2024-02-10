class Example {
    // public Example(int a){
    //     System.out.println(a);
    // }
    // public Example(String a){
    //     System.out.println(a);
    // }
    public <T> Example(T x){
        System.out.println("This is Generic constructor : " + x);
    }
}

public class GenericConstructor {
    public static void main(String []args){
        Example e1 = new Example(10);
        Example e2 = new Example("Pranjal");
    }
}
