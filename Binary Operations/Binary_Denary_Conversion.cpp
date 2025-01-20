#include<iostream>
using namespace std;
void solve(){
    int UserID[5] = {1000,1500,2000,2500,3000};
    int userInput;
    cout<<"Enter the User Id : ";
    cin>>userInput;
    int validUserId = 0;
    for(int i=0;i<5;i++){
        if(userInput==UserID[i]) validUserId =1;
    }
    if(!validUserId){
        cout<<"Invalid UserId"<<endl;
        cout<<"Exiting..."<<endl;
        return;
    }
    int choice;
    do{
        cout<<"------------------"<<endl;
        cout<<"1. Check Balance"<<endl;
        cout<<"2. Deposit Money"<<endl;
        cout<<"3. Withdraw Money"<<endl;
        cout<<"4. Exit!"<<endl;
        cin>>choice;

        
    }while(choice!=4);
}
int main(){
    
    solve();
    return 0;
}
