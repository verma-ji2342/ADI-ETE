import java.util.*;

public class sixtynine {

    public static int[] findSubarrayWithSumZero(int[] arr) {
        HashMap<Integer, Integer> sumToIndex = new HashMap<>();
        int sum = 0;
        int start = 0;

        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];

            if (sum == 0) {
                return new int[]{0, i};
            }

            if (sumToIndex.containsKey(sum)) {
                start = sumToIndex.get(sum) + 1;
                return Arrays.copyOfRange(arr, start, i + 1);
            }

            sumToIndex.put(sum, i);
        }

        return new int[0]; // No subarray with a sum of 0 found
    }

    public static void main(String[] args) {
        int[] arr = {3, 4, -7, 3, 1, 3, 1, -4, -2, -2};
        int[] result = findSubarrayWithSumZero(arr);

        if (result.length == 0) {
            System.out.println("No subarray with a sum of 0 found.");
        } else {
            System.out.println("Subarray with sum 0 found:");
            for (int num : result) {
                System.out.print(num + " ");
            }
            System.out.println();
        }
    }
}