#include <iostream>
using namespace std;
int main(){
    int marks[]={-105,100,105,110,-108};
    int min = INT_MAX; // plus infinity !!!
    for(int i=0;i<(sizeof(marks)/sizeof(marks[0]));i++){
        if(min>marks[i])
            min = marks[i];
    }
    cout<<min<<endl;

    return 0;
}
