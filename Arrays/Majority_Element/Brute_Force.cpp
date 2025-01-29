#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
    int majorityElement(vector <int>& nums){
        int size = nums.size();

        for(int i=0;i<size;i++){
            int freq=1; // counting itself HENCE freq = "1" and re-initializing to 1 after every iteration!
            for(int j=i+1;j<size;j++){
                if(nums[i]==nums[j]){
                    freq++;
                     
                }
            }
            if(freq>size/2){

                return nums[i];
            }
        }
        return -1;
    }
};
int main (){
    Solution s1;
    vector<int>num ={3,2,3};
    int answer = s1.majorityElement(num);
    cout<<answer<<endl;

    return 0;
}
