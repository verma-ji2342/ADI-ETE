

import java.io.*;
import java.util.*;
import java.util.function.*;

class lambda {
    static void printCond(Collection<Integer> C, Predicate<Integer> p)
    {
        for(Integer x: C)
        {
            if(p.test(x))
                System.out.print(x+" ");
        }
    }
	public static void main (String[] args) {
		
		class MyPredicateEven implements Predicate<Integer> {
		    
		    public boolean test(Integer x)
		    {
		        return x%2==0;
		    }
		}
		List<Integer> al= new ArrayList<>(Arrays.asList(10,5,20,7,30));
		
		printCond(al,new MyPredicateEven());
	}
}

        int n = s.size();
        string str;
        stack<char> stack;
        for(int i=0;i<n;i++){
            if(s[i]=='(')stack.push(s[i]);
            else if(s[i]<=int('z')&&s[i]>=int('a')||s[i]>=int('0')&&s[i]<=int('9')){
                str.push_back(s[i]);
            }
            else if(s[i]==')'){
                while(stack.top()!='('){
                    str.push_back(stack.top());
                    stack.pop();
                }
                stack.pop();
            }
            else{
                while(!stack.empty()&&mpp[stack.top()]>=mpp[s[i]]){
                    str.push_back(stack.top());
                    stack.pop();    
                }
                stack.push(s[i]);
            }
        }
        while(!stack.empty()){
            str.push_back(stack.top());
            stack.pop();
        }