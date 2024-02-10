import java.util.*;


public class fourteen {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        int i=0;
        Stack<Character> st = new Stack<>();
        while(i < str.length()){
            if(str.charAt(i)=='{' || str.charAt(i) == '[' || str.charAt(i) == '('){
                st.push(str.charAt(i));
            }
            else if(str.charAt(i)==')' || str.charAt(i)=='}' || str.charAt(i)==']'){
                if(st.isEmpty()){
                    System.out.println("False");
                    return;
                }
                else if((st.peek()=='(' && str.charAt(i)!=')') || (st.peek()=='[' && str.charAt(i)!=']') || (st.peek()=='{' && str.charAt(i)!='}')){
                    System.out.println("False");
                    return ;
                }
                st.pop();
            }
            i++;
        }
        if(!st.isEmpty()){
            System.out.println("False");
        }
        else{
            System.out.println("True");
        }
    }
}
