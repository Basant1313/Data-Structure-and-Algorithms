#include<iostream>
using namespace std;

int main(){

    int num,dig;
    cout<<"Enter the Number : ";
    cin>>num;
    


    while(num!=0){
       
         dig=num%10; // Getting Last Digit
       cout<<dig;
         num=num/10; // Removing Last Digit From Num
        
    }
    
return 0;
}