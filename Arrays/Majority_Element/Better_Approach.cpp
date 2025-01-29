// Better Approach // Time Complexity O(NlogN + N)
#include<iostream>
#include<vector>
#include<algorithm> // for sort!!!
using namespace std;
class Solution{
public:
    int majorityElement(vector <int>& nums){
        int size = nums.size();
        // Sort
        sort(nums.begin(),nums.end()); // NlogN
        int freq=1, ans = nums[0];

        for(int i=1; i<size;i++){// 1 because ans = nums[0]
            if(nums[i]==ans){
                freq++;
            }
            else{
                freq = 1;
                ans = nums[i];
            }
            
            if(freq>size/2){

                return ans;
            }
        }
        return ans;
    }
};
int main (){
    Solution s1;
    vector<int>num ={3,2,3};
    int answer = s1.majorityElement(num);
    cout<<answer<<endl;

    return 0;
}
