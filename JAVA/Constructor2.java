import java.util.*;


class A {
    public A(int l){
        System.out.println("Parent Class " + l);
    }
}

class B extends A{
        public B(){
            super(10);
        System.out.println("Child Class");
    }
}

public class Constructor2 {
    public static void main(String []args){
        B b = new B();
    }
}