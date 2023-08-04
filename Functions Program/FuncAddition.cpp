#include<iostream>
using namespace std;


int getSum(int x,int y){//function defination and declaration
    return (x+y);
    

}

int main(){

int num1 ,num2;
cout<<"Enter the Numbers : ";
cin>>num1>>num2;
int sum=getSum(num1,num2); // function calling

cout<<sum;



}
