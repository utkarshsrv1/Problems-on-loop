//Q2 - Write a program to print all Armstrong numbers between 100 to 500.
#include <iostream>
using namespace std;

int main(){

  for(int i=100;i<500;i++){
        int sum=0;
        int arm=i;
        
      while(arm!=0){
          
        int last = arm%10;
        sum+=(last*last*last);
        arm/=10;
      }
      if(sum==i)
      {
        cout<<i<<endl;
      }
      
    }
  
  
  return 0;
}
