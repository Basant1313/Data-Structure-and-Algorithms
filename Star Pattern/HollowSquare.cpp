#include<iostream>
using namespace std;

int main(){

int num;
cout<<"Enter the number : ";
cin>>num;

for(int row=0; row<num; row++) // Outer Loop for Rows
{
    for(int col=0;col<num;col++){ // Inner Loop for Columns
        if(row==0 || row==num-1 || col==0 || col==num-1){ // To print * only at Border
        cout<<"* ";
        }

            
            else{
                cout<<"  ";
            }
            
        

    }
    cout<<endl;  // To jump to Next Line after each column execution
    }
return 0; 
}

