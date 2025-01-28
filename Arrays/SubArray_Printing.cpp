#include<iostream>
using namespace std;
int main(){
    int n =5;
    int array[n] = {1,2,3,4,5};
    for(int start = 0;start<n; start++){//1
        for(int end = start; end<n; end++){//1 2 3 4 
            for(int i=start; i<=end;i++){
                cout<<array[i];// 2 23 234 2345
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}          
