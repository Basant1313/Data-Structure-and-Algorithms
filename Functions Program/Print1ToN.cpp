#include<iostream>
using namespace std;

void print_Num(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }
}

int main(){

int num;
cout<<"Enter the Numbers Upto Print :  ";
cin>>num;

print_Num(num);

return 0;

}