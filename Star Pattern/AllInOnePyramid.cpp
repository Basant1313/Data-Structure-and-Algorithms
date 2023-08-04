#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
        if(j<i+1){
            cout<<j+1; // Note : Adjust the Space And See the Changes it will 3 types of Outputs       
            }              //1.Left Half Pyramid
                           //2.Full Pyramid
                           //3.Right Half Pyramid



        else{
            cout<<"      ";
        }
    }
    cout<<endl;
}
return 0;
}