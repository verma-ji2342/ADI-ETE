public class ved {
    public static void main(String []args){
        String s = "Chitkara University" ;
        String ch[] = s.split(" ");
        StringBuilder t = new StringBuilder("");
        for(int i=0 ; i<ch.length ; i++){
            StringBuilder  x =  new StringBuilder(ch[i]);
            x.reverse();
            System.out.print(x+" ");
        }
        System.out.println(t);
    }
}
