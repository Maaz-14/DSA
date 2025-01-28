#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v={3,-4,5,4,-1,7,-8};
	int size = v.size();

	int currentSum, maxSum = INT_MIN;

	for(int start =0;start<size;start++){
		currentSum = 0;
		for(int end = start; end<size;end++){
			currentSum+=v[end];
			maxSum = max(currentSum,maxSum);
		}
	}
	cout<<"Maximum SubArray Sum is "<<maxSum<<endl;
	return 0;
} 
// Time Complexity O (N^2) BRUTE FORCE
