import java.io.*;
import java.util.*;
public class Exception4 {
    public static void main(String []args)  {
        try{
            throw new IOException();
        }
        catch(IOException e){
            System.out.println("Exception : "+e.getMessage());
        }
        // System.out.println("Hello World");
    }
}
