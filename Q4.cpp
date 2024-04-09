//Q4 - Write a program to reverse a given integer number.
#include <iostream>
using namespace std;

int main(){
    int n=538;
    int reverse=0;
    
    //Taking input by the users
    while(n!=0){
       reverse=reverse*10+(n%10);
       n=n/10;
    }
  cout<<"Reverse is: "<<reverse<<endl;
  
  return 0;
}
