import java.util.*;

public class FinalKeyword{
    private final int i;
    
    public FinalKeyword(){
        i=5;
        System.out.println(i);
        i=6;
        
    }
    public static void main(String []args){
        FinalKeyword e1 = new FinalKeyword();
    }
}