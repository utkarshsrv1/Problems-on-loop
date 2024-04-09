//Q3 - Write a program to find the sum of n natural numbers.
#include <iostream>
using namespace std;

int main(){
    int n,sum;
    
    //Taking input by the users
    
    cout<<"Enter any natural number for the sum"<<endl;
    cin>>n;
    
    for(int i=1;i<=5;i++){
        sum+=i;
    }
  cout<<"Sum of the given natural number is: "<<sum<<endl;
  
  return 0;
}
