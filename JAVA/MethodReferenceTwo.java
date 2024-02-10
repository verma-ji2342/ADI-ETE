import java.util.*;

interface Sayable{
    void say();
}

public class MethodReferenceTwo {

    public void saysomething(){
        System.out.println("Heyyy... This is calles Reference to an instance Method..");
    }
    public static void main(String []args){
        MethodReferenceTwo obj = new MethodReferenceTwo();

        Sayable s = obj::saysomething;
        s.say();

        Sayable s2 = new MethodReferenceTwo()::saysomething;
        s2.say();
    }
}
