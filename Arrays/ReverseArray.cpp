// Reverse an array in C++ using swap function
#include<iostream>
using namespace std;
void reverseArray(int array[],int size){
    int start = 0 , end = size - 1;
    while(start<end){ // stopping condition for odd sized array : start==end // stopping condition for even sized array : start>end
                     // Hence the stopping condition is start<end as it will work for both odd and even sized arrays. start >= end!
        swap(array[start],array[end]);
        start++;
        end--;
    }
    return;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int array[] = {1,3,2,3,4,5,6};
    int size = sizeof(array)/ sizeof(array[0]);

    reverseArray(array,size);
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}
// Time complexity : O(n) where n is the "size of the array". as The function will perform swap size/2 times . 
