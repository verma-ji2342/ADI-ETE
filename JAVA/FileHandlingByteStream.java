import java.io.File;
import java.io.IOException;

public class FileHandlingByteStream {
    try{
        File obj=new File("input.txt");
        if(obj.createNewFile()){
            System.out.println(obj.getName());
        }else{
            System.out.println("File already exists.");
        }
        if(obj.exists()){
            System.out.println(obj.getName());
            System.out.println(obj.getAbsolutePath());
            System.out.println(obj.canWrite());
            System.out.println(obj.canRead());
            System.out.println(obj.length());
        }else{
            System.out.println("File doesn't exists");
        }
    }
    catch (IOException e){
        System.out.println("An error occured");
    }
}
