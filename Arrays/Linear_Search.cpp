#include<bits/stdc++.h>
using namespace std;    
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define for(i,n) for(int i=0;i<n;i++)
int linearSearch(int arr[], int size){
    int targetElement;
    cin>>targetElement;
    for(i,size){
        if(arr[i]==targetElement)
            return i; // If the element is found return the index of the element
    }
    return -1; // If the element is not found
}
int main(){
    fast;
    int array[]= {9,8,2,7,1,2,3};
    cout<<"Value found at index "<<linearSearch(array,7)<<endl;
    return 0;
}
// Time complexity of linear search is "O(n)" where n is the number of elements in the array.
