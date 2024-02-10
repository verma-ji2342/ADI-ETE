import java.util.*;
import java.io.*;

class A extends Thread {
    public void run(){
        for(int i=1 ; i<11 ; i++){
            System.out.println("i = "+i+" Thread A");
        }
    }
}

class B extends Thread {
    public void run(){
        for(int i=1 ; i<11 ; i++){
            System.out.println("i = "+i+" Thread B");
        }
    }
}

public class Threadss{
    public static void main(String []args){
    A ob1 = new A();
    B obj = new B();
    ob1.start();
    obj.start();
    }
}
