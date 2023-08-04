#include<iostream>
using namespace std;


// function defination and declaration 
void give_Sum(int brr[][4],int rows, int columns){ // (Note- when passing the array in function we need provide/fill all square bracket except the 1st)
    cout<<"sum of columns of elements are "<<endl;
    for(int i=0;i<rows;i++){
        int sum=0;// storing sum in columns wise
        for(int j=0;j<columns;j++){
            sum+=brr[j][i];
        }
        cout<<sum<<" ";
        cout<<endl;
    } 
}

int main(){

    int brr [4][4];
    int rows=4;
    int columns=4;

     cout<<"Enter the Elements in 2D-Array "<<endl;
    for(int i=0;i<rows;i++){ // outer loop for traversing Rows
        for(int j=0;j<columns;j++){ // Inner Loop for traversing columns

            cin>>brr[j][i]; // inserting input column wise as [j] appear 1st
        }
    }

    cout<<"Elemets in 2D array is "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){

            cout<<brr[i][j]<<" "; // once we take input in column wise no need to print array column wise orelse array may get jumbled
        }
        cout<<endl;
    }

    give_Sum(brr,rows,columns); // function calling 
}