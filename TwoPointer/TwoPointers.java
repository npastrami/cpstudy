
public class TwoPointers {
    public static int[] twoSum(int[] nums, int target) {
        int left = 0, right = nums.length - 1;

        while (left < right) {
            int currentSum = nums[left] + nums[right];
            if (currentSum == target) {
                return new int[]{left, right};
            } else if (currentSum < target) {
                left++;
            } else {
                right--;
            }
        }

        return null;
    }

    public static void main(String[] args) {
        int[] result = twoSum(new int[]{1, 2, 3, 4, 5, 6}, 6);
        if (result != null) {
            System.out.println("Indices: " + result[0] + ", " +result[1]);
        }
    }
}
