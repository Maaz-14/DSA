// Time Complexity  O ( n logn)---> O(n)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maxSum(vector<int>& nums) {
        int maxNumForDigit [10] ={0};
        int ans =-1;
        for (int number : nums){ // for each loop
            int maxDigit = 0;
            int value = number;
            while(value){
                maxDigit = max(maxDigit, value % 10);
                value /= 10;
                
            }
            if(maxNumForDigit[maxDigit]){
                ans = max(ans , maxNumForDigit[maxDigit] + number);
            }
            if(number > maxNumForDigit[maxDigit]){
                maxNumForDigit[maxDigit] = number;
            }
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<int> nums= {51,71,17,24,42,94,27}; // answer should be "98"
    // vector<int> nums= {51,71,17,24,42}; // "returns 88"
    // vector<int> nums = {112,131,411}; // "returns -1"
    cout<<s.maxSum(nums);
    return 0;
}
