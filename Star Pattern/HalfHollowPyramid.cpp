#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;

    for(int row=0;row<num;row++){
        for(int col=0;col<row+1;col++){
            if(row==0 || row==num-1|| col==0 || col==row){ // Printing * at the Border of the Half Pyramid
                cout<<"* ";
            }
            else{
                cout<<"  "; // Printing Spaaces inside Half Pyramid
            }
        }
        cout<<endl; // Jump to Next line after each Columns Executed
    }
    return 0;
}