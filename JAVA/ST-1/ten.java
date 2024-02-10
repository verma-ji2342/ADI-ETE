import java.util.*;

public class ten {

    public static void main(String []args){
        int number = 42; // For example, let's find the first set bit in the number 42 (101010 in binary)
        int left = findFirstSetBitPosition(number);
        int right = getFirstSetBitPos(number);
        System.out.println(left + " "+right);
        System.out.println(findNthBit(number, 2));
        return ;

    }
    public static int findNthBit(int num, int n) {
        return (num >> n) & 1;
    }

    public static int findFirstSetBitPosition(int num) {
        int position = 1;
        while (num > 0) {
            if ((num & 1) != 0) {
                return position;
            }
            num >>= 1;
            position++;
        }
        return -1; // Return -1 if no set bit is found
    }

    public static int getFirstSetBitPos(int n)
    {
        return (int)((Math.log10(n & -n)) / Math.log10(2))
            + 1;
    }
}
