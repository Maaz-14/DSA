#include<iostream>
#include<string>
using namespace std;
class Customer{
    string name;
    int account_number;
    int balance;
public:
    
    Customer(){
        name = "Maaz Asif";
        account_number = 1001;
        balance = 200;
    }
    // Copy Constructor
    Customer(Customer &B){ // reference to c1!!
        name = B.name;
        account_number = B.account_number;
        balance = B.balance;
    }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
};
int main(){
    Customer c1; //default constructor called
    c1.display();
    Customer c2(c1);// Shallow Copy // Copy Constructor called!!
    // Reference is must
    c2.display();
    
    c1.display();
    Customer c3;
    c3 = c1; // Copy // Shallow Copy
    c3.display();


    return 0;

}

#include<iostream>
#include<string>
using namespace std;
class Customer{
    
    int account_number;
    int balance;
public:
    string name;
    Customer(){
        name = "Maaz Asif";
        account_number = 1001;
        balance = 200;
    }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
};
int main(){
    Customer c1; //default constructor called
    c1.display();
    c1.name = "zain";
    Customer c2(c1);// Shallow Copy // Default Copy Constructor 
    
    c2.display();
    c1.display();

    return 0;

}
