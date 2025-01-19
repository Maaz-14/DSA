#include<iostream>
using namespace std;
void uniqueElements(int array[],int size){
    
    for(int i=0;i<size;i++){
        int found = 0;
        for(int j=i+1;j<size;j++){
            if(array[i]==array[j]){
                found = 1;
                break;
            }            
        }
        if(found==0){
            cout<<array[i]<<" ";
        }
    }
}
int main(){
    int size;
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"Unique elements are: ";
    uniqueElements(array,size);
    return 0;
} // Time Complexity O(n^2) due to Nested Loop!!

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
