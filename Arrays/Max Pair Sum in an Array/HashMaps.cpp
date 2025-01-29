// Time Complexity O(n) // Hash Map
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_map<int, int> maxMap; // Stores max num for each max digit
        int maxPair = -1;

        for (int num : nums) {
            int maxDigit = -1, temp = num;

            // Extract the maximum digit of 'num'
            while (temp) {
                maxDigit = max(maxDigit, temp % 10);
                temp /= 10;
            }

            // Check if a number with the same max digit exists
            if (maxMap.count(maxDigit)) {
                maxPair = max(maxPair, maxMap[maxDigit] + num);
            }

            // Update the maximum number for this max digit
            maxMap[maxDigit] = max(maxMap[maxDigit], num);
        }

        return maxPair;
    }
};

int main() {
    Solution s;
    vector<int> nums = {51, 71, 17, 24, 42, 94, 27}; // Output: 98
    cout << s.maxSum(nums) << endl;
    return 0;
}

