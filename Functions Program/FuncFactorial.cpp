#include<iostream>
using namespace std;

int find_Factorial(int x){
  int  factorial=0;
for(int i=1;i<=x;i++){
    if(factorial==0){ // as facotrial 0!=1 so so we increment factorial==0 to 1
        factorial++;
    }
      
    factorial=factorial*i;
    
    
}
return factorial;
}

int main(){
int fact_Num;
cout<<"Enter the Number you Want factorial : ";
cin>>fact_Num;

int fact=find_Factorial(fact_Num);
cout<<fact;

}