#include<iostream>
using namespace std;

//function defination and declaration 
int transpose_matrix(int matrix[][3],int rows,int columns,int t_matrix[][3]){
   
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            t_matrix[j][i]=matrix[i][j];
        }
    }
    
    return t_matrix[3][3]; // returing transpose matrix from where it is called in main
}

int main(){
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int t_matrix[3][3]; // creating a 2D-array for storing transpose of matrix .Bina create kiya swap kiya toh same matrix print hota hai
    int rows=3;
    int columns=3;

         cout<<"Elements of Matrix are : "<<endl;                    
                             // outer loop for traversing rows
    for(int i=0;i<rows;i++){
        // inner loop for traversing columns
        for(int j=0;j<columns;j++){

            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    transpose_matrix(matrix,rows,columns,t_matrix); // function calling
    cout<<"Transpose of Matrix "<<endl;

    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){

            cout<<t_matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}