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
