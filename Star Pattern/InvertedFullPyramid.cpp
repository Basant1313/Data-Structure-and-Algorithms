#include<iostream>
using namespace std;

int main(){

    int rows;
    cout<<"Enter the Number of Rows : ";
    cin>>rows; // rows==Total Number of Rows

    for(int i=0;i<rows;++i){ // loop for column
        for(int j=0;j<i;++j){  //printing Spaces in half pyramid manner
            cout<<" ";
        }
        for(int j=0;j<rows-i;++j){  // printing * 
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}