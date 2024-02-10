public class Exception2 {
    public static void main(String []args){
        String s=null;
        try{
            System.out.println("First Line ");
            System.out.println(s.length());
            System.out.println(3/0);
            System.out.println("Third Line "); // After exception no line will be execute. It will directly jump to the catch section.
        }
        catch(NullPointerException e){
            System.out.println("Eception : "+e.getMessage());
        }
        catch(ArithmeticException e){
            System.out.println("Exception  : "+e.getMessage());
        }
        System.out.println("Hello World ");
    }
}
