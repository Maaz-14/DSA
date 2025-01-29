// BRUTE FORCE!
// See Question on leetcode!
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxSum(vector<int>& nums) {
        int size = nums.size();
        int maxPair = INT_MIN,maxDigit=-1, digit, number;
        int answer = -1; // return!!!
        for (int i=0;i<size;i++){
            maxDigit=-1;
            number = nums[i];

            while(number){
                digit = number % 10;
                number/=10;
                if(digit>=maxDigit) maxDigit = digit;
            }
            
            for(int j=i+1;j<size;j++){
                int maxDigit1=-1;
                number = nums[j];
                while (number){
                    digit = number % 10;
                    number/=10;
                    if(digit>=maxDigit1) maxDigit1 = digit;
                }
                
                if(maxDigit1==maxDigit){
                    answer = nums[i] + nums[j];
                    if(answer>maxPair){
                        maxPair = answer;
                    }
                }
            }
        }
        if(maxPair == INT_MIN){
            return -1;
        }
        else
            return maxPair;
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
// Time Complexity O(N^2)

// O(N^2) x O(log(number))
// O(log(number)) approx equals to O(d) where d<=10 (where d are  digits 0-9 )
// Sice d is small HENCE "O(log(number)) = O(1)"

// Hence Time Complexity = O(N^2)
