#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    string addBinary(string a, string b){
        string result ="";
        int i = a.size() -1; //1001-->4-1 = "3"
        int j= b.size()-1;
        int carry = 0;

        while(i>=0||j>=0 || carry){
            int sum =carry; //
            if(i>=0){
                sum+=a[i] - '0'; // a[i]--> '1' so '1'-'0' will be 1 in integer
                i--;
            }
            if(j>=0){
                sum+=b[j] -'0';
                // if sum =1 so 1+'0'-'0'-->sum =1
                j--;
            }
            result += (sum % 2) + '0'; // sum =1 so 0 + '0'---> '0'
            //ya toh 0 aiga ya 1
            carry=sum/2; //  0/2 = 0
            //if sum =2 so carry =1;
            //condition true HENCE sum =1;
            // result = 1 +'0' ---> '1' which will be added in the end MSB
        }
        reverse(result.begin(),result.end()); // to show in correct order/ way.
        return result;
    }
};
int main(){
    string binary1 ;
    string binary2 ;
    cin>>binary1;
    cin>>binary2;
    Solution solution;
    string result = solution.addBinary(binary1,binary2);
    cout<<result;    

}