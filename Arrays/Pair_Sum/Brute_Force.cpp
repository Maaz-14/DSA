// Indexes of Pair // Assuming Target asked can be achieved through this vector
#include<bits/stdc++.h>  
using namespace std;
// Function of return type "vector<int>"
vector<int> PairSum(vector<int>&numbers,int target){
    vector<int> answer;
    int size = numbers.size();

    // int PairFound =0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(numbers[i]+ numbers[j]== target){
                // PairFound =1;
                answer.push_back(i);// "index" of that pair is pushed in answer vector
                answer.push_back(j);// "index" of that pair is pushed in answer vector
                return answer;// will return the vector answer
                // in "main" you can print values from this vector through ans[0] and ans[1]
            }
        }
    }
    return answer;
    // if(!PairFound) cout<<"No pair found!!!"<<endl;

}
int main(){
    vector<int> numbers = {2,7,11,15,17};
    int target = 13;
    vector<int> ans = PairSum(numbers,target);// Return type was vector<int> HENCE we used vector<int> ans!!!
    cout<<ans[0]<<", "<<ans[1]<<endl; // will return the indexes of pair stored!!

    return 0;
}
// Time Complexity O(N) // Brute Force 
