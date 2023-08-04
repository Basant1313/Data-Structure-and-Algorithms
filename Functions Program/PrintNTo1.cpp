#include<iostream>
using namespace std;


void print_Revnum(int n)
{
    for(int i=n;i<=n;i--){
        cout<<i<<endl;
        if(i==1){
            break;
        }
    }
}


int main(){
    int num;
    cout<<"Enter the Number : ";
    cin>>num;


    print_Revnum(num);
}
