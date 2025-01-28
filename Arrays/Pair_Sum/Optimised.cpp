#include<iostream>
#include<vector>
using namespace std;

vector<int> PairSum(vector<int>&numbers, int target){
    int size = numbers.size();
    int i = 0;
    int j = size-1;

    vector <int> ans;

    while(i<j){// i=j will not make a pair!
        if(numbers[i]+numbers[j]> target){// Since array is sorted in ascending order so if "greator than target" then "j-- will let add numbers[i] with a smaller number"
            j--;
        }
        else if(numbers[i]+numbers[j] < target){
            i++; // add a greator number so we increment "i"
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }

    }
    return ans;// To avoid warning

}
int main(){
    vector<int> nums = {2,7,11,15,17};
    int target = 13;
    vector<int> answer = PairSum(nums,target);
    cout<<answer[0]<<", "<<answer[1]<<endl;

    return 0;
}
// Time Complexity O(N).
