#include<iostream>
using namespace std;

void find_it(int n){

    if(n%2==0){
        cout<<"Number is Even ";
    }
    else{
        cout<<"Number is Odd";
    }


}

int main(){

    int num;
    cout<<"Enter the Number = ";
    cin>>num;

    find_it(num);


return 0;
}