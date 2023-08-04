#include<iostream>
using namespace std;
int main(){
    int num_row,num_col;
    cout<<"Enter the number of row : ";
    cin>>num_row;

    cout<<"Enter the number of column :";
    cin>>num_col;
     
     // Outer Loop for Rows
    for(int row=0; row<num_row;row++) 
    {
        // Inner Loop for Columns
        for(int col=0;col<num_col;col++){ 
            if(row==0 || row==num_row-1 || col==0 || col==num_col-1){ //To print * only at border
                cout<<"* ";
            }
            else{
                cout<<"  "; // To print space in Inner Hollow Part
            }
        }
        cout<<endl; //Jump to Line after Column end
    }

    
}