#include<iostream>
using namespace std;
void solve(int array[],int array1[],int size,int size1){
    cout<<"Intersection of two arrays is "<<endl;
    for(int i=0;i<size;i++){
        for(int j=0;j<size1;j++){
            if(array[i]==array1[j]){
                cout<<array[i]<<" ";
                break;// To avoid redundant check for same element!
            }
        }
    }
}
int main(){
    int array[] ={1,2,3,4,5,6};
    int array1[]={1,6,7,8,9,0};
    int size = sizeof(array)/sizeof(array[0]);
    int size1 = sizeof(array1)/sizeof(array1[0]);

    solve(array,array1,size,size1);
    
    return 0;
}
// Time Complexity : O(size x size1)
// Space Complexity : O(1)

// USING POINTERS!
#include <iostream>
using namespace std;

void solve(int *array, int *array1, int size, int size1) {
    cout << "Intersection of two arrays is:" << endl;
    for (int *ptr1 = array; ptr1 < array + size; ptr1++) {//1001 + 4 --> 1005. 1005+4---> 1009...
        for (int *ptr2 = array1; ptr2 < array1 + size1; ptr2++) {
            if (*ptr1 == *ptr2) {
                cout << *ptr1 << " ";
                break; // Avoid redundant checks for the same element
            }
        }
    }
    cout << endl;
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 6};
    int array1[] = {1, 6, 7, 8, 9, 0};
    int size = sizeof(array) / sizeof(array[0]);
    int size1 = sizeof(array1) / sizeof(array1[0]);

    solve(array, array1, size, size1);

    return 0;
}

// Using Hashing!!
#include <iostream>
#include <unordered_set>
using namespace std;

void solve(int array[], int array1[], int size, int size1) {
    unordered_set<int> elements(array, array + size); // Insert all elements of the first array into a set
    cout << "Intersection of two arrays is:" << endl;
    
    for (int i = 0; i < size1; i++) {
        if (elements.find(array1[i]) != elements.end()) { // Check if array1[i] exists in the set
            cout << array1[i] << " ";
            elements.erase(array1[i]); // Avoid duplicates in output
        }
    }
    cout << endl;
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 6};
    int array1[] = {1, 6, 7, 8, 9, 0};
    int size = sizeof(array) / sizeof(array[0]);
    int size1 = sizeof(array1) / sizeof(array1[0]);

    solve(array, array1, size, size1);

    return 0;
}
// Time Complexity : O(size + size1) 
// Space Complexity : O(size)
