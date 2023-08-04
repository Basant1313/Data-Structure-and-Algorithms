#include<iostream>
using namespace std;

int main(){

    int rows;
    cout<<"Enter the NUmber of Rows : ";

    cin>>rows;

    for(int i=0;i<rows;++i){
        for(int j=0;j<i;++j){
            cout<<i;
           
        }
    cout<<endl;
    }
    for(int i=0;i<rows;++i){
        for(int j=0;j<i;++j){
            cout<<j+1;
            
            
        }
        cout<<endl;
}
return 0;
}