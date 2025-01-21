#include <iostream>
using namespace std;

void swapMax_Min(int* array, int size) {
    int max = array[0];
    int min = array[0];
    int indexMax = 0, indexMin = 0;

    for (int* ptr = array+1; ptr < array + size; ptr++) {
        if (*ptr > max) {
            max = *ptr;
            // cout<<"ptr: "<<ptr<<endl;
            // cout<<array<<endl;
            indexMax = ptr - array; // (0x41ffbff820 - 0x41ffbff820)/4 (as sizeof(int)=4!) = 0th index
            // cout<<"indexMax : "<<indexMax<<endl;
        }
        if (*ptr < min) {
            min = *ptr;
            indexMin = ptr - array; // 0xcb8bffc14 - 0xcb8bffc10 /4 = 1th index
        }
    }

    if (indexMax !=indexMin ) {
        int temp = array[indexMax];
        array[indexMax] = array[indexMin];
        array[indexMin] = temp;
    }
}

int main() {
    int array[] = {12, 34, 5, 23, 56, 1};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    swapMax_Min(array, size);

    cout << "Array after swapping max and min elements: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
// Time Complexity O(N) N = size
