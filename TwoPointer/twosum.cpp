#include <iostream>
#include <vector>

std::vector<int> twoSum(std::vector<int> &nums, int target) {
    int left = 0, right = nums.size() - 1;

    while (left < right) {
        int current_sum = nums[left] + nums[right];
        if(current_sum == target) {
            return {left, right};
        } else if (current_sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return {};
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5, 6};
    std::vector<int> result = twoSum(nums, 6);
    if (!result.empty()){
        std::cout << "Indicies: " << result[0] << ", " << std::endl;
    }
    return 0;    
}