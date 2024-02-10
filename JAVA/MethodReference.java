import java.util.*;

interface sayable{
    void say();
}

public class MethodReference {
    
    public static void saysomething(){
        System.out.println("Hyy... This is pranjal Verma.");
    }
    public static void main(String args[]){
        sayable s = MethodReference::saysomething;
        s.say();
    }

    
}