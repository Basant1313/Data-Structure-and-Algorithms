#include<iostream>
using namespace std;
 int main(){

    int num;

    cout<<"Enter the number : ";
    cin>>num;
    // Outer Loop for Rows 
    for(int row=0 ; row<num; ++row){
        // Inner Loop for Columns
        for(int col=0;col<num-row;++col){
            if(col==0 || row==0 || col==num-row-1){  // Printing * at the border of the half inverted Pyramid
            cout<<"* ";
            }
            else{
                cout<<"  "; // Printing Spaces inside Inverted
            }
        }
        cout<<endl; // To jump to Next Line after Column complete

    }
    return 0;

 }