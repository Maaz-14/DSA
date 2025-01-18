// Arrays are by default passed by reference!!!
#include <bits/stdc++.h>
#define for(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

void changeArray(int arr[], int size){
    for(i,size){
        arr[i] = arr[i]*2; // These changes will be reflected in the main function as well. 
        // Array are passed by reference "by default."
    }
}
int main(){
    fast;
    int array[] = {1,2,3,4};   
    changeArray(array , 4);
    for(i,4){
        cout<<array[i]<<" "; // 2 4 6 8
    }

    return 0;
}
