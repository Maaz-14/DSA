#include <iostream>
using namespace std;
void smallestElement(int *arr, int size){
    int smallest = INT_MAX;
    for(int i=0;i<size;i++){
        smallest = min(arr[i],smallest);// This is a built-in function in C++ to find the minimum of two numbers.
        //max(arr[i],largest) // for maximum element.
    }
    cout<<smallest<<endl;
}
int main(){
    int marks[]={99,100,105,110,102};
    
    smallestElement(marks,5);

    int smallest = INT_MAX; // INT_max means plus infinity !!!
    for(int i=0;i<(sizeof(marks)/sizeof(marks[0]));i++){
        if(smallest>marks[i]) // OR smallest = min(marks[i],smallest);
            smallest = marks[i];
    }
    cout<<smallest<<endl;

    return 0;
}
// Program : With the index on which smallest and Largest number are found
#include <iostream>
using namespace std;
void solve(){
    int largest = INT_MIN;
    int smallest = INT_MAX;
    int  array [] = {0,9,-9,8,2,22,56,-5,90};
    int size = sizeof(array)/sizeof(array[0]);
    int SmallestNumberIndex;
    int LargestNumberIndex;
    for(int i=0;i<size;i++){
        smallest = min(smallest,array[i]);
        if(smallest == array[i]) SmallestNumberIndex = i;
        
        largest = max(largest,array[i]);
        if(largest == array[i]) LargestNumberIndex = i;
    }
    cout<<"The smallest number is "<<smallest<<" which is on index "<<SmallestNumberIndex<<endl;
    cout<<"The largest number is "<<largest<<" which is on index "<<LargestNumberIndex<<endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
