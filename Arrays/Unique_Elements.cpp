#include<iostream>
using namespace std;

void uniqueElements(int array[], int size) {
    for (int i = 0; i < size; i++) {
        int Duplicate =0;

        for (int j = 0; j < size; j++) {
            if (i != j && array[i] == array[j]) { // i!=j ensures that the element is not compared with itself.
                Duplicate = 1;
                break;
            }
        }

        if (!Duplicate) {
            cout << array[i] << " ";
        }
    }
}

int main() {
    int size;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    cout << "Unique elements are: "; // If whole array has same elements then it will print Nothing
    uniqueElements(array, size);
    return 0;
}// Time Complexity: O(n^2) as there is a nested loop.



// Same Program with Time Complexity O(n)!! (Unordered Map!)
#include <iostream>
#include <unordered_map>
using namespace std;

void uniqueElements(int array[], int size) {
    unordered_map<int, int> freq;

    for (int i = 0; i < size; i++){
        freq[array[i]]++;
    }

    for (int i = 0; i < size; i++){
        if (freq[array[i]] == 1){
            cout << array[i] << " ";
        }
    }
}

int main() {
    int size;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    cout << "Unique elements are: ";
    uniqueElements(array, size);
    return 0;
}
