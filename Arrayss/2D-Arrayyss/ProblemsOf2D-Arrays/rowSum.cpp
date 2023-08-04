#include<iostream>
using namespace std;

void give_Sum(int arr[][3],int rows ,int columns){ // (Note- when passing the array in function we need provide/fill all square bracket except the 1st)
    cout<<" Row wise Sum "<<endl;
    for(int i=0;i<rows;i++){
    int ans=0; // storing sum row wise
        for(int j=0;j<columns;j++){
            ans+=arr[i][j];
            
        }
    
        cout<<ans<<" ";    

    cout<<endl;
    }

}

int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    int rows=3;
    int columns=3;

    for(int i=0;i<rows;i++){// outer loop for traversing Rows
    
        for(int j=0;j<columns;j++){// Inner Loop for traversing columns
            cout<<arr[i][j]<<" ";
            
        }
    cout<<endl;
    }


    give_Sum(arr,rows,columns); // function calling

}