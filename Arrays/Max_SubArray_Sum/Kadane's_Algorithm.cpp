// Kadane's Algorithm ---> Dynamic Programming Algorithm        
#include<iostream>
using namespace std;
int main(){
    int array[]={3,-4,5,4,-1,7,-8};
    int size = sizeof(array)/sizeof(array[0]);

    int currentSum=0 , maxSum = INT_MIN ;
    for(int i = 0;i<size; i++){
        currentSum+=array[i];
        maxSum = max(currentSum,maxSum);
        if(currentSum < 0) // if negative then ignore that subarray and continue from next subarray!
            currentSum = 0;
    }
    cout<<"Maximum SubArray sum is "<<maxSum<<endl;

    return 0;
    // Time Complexity O(N)
}
