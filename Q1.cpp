//Q1 - Write a program to calculate the factorial of a number.
#include <iostream>
using namespace std;

int main(){
  int n;
  int fact=1;
  //Taking input from the users
  cout<<"Enter a number for factorial"<<endl;
  cin>>n;

  for(int i=1;i<=n;i++){
    fact*=i;
  }
  cout<<"Factorial of "<<n<<" number is: "<<fact;

    return 0;
}
