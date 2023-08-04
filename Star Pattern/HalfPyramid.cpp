#include<iostream>
using namespace std;
 int main(){

    int num;

    cout<<"Enter the number : ";
    cin>>num;

    for(int row=0 ; row<num; ++row){ // Outer Loop for Rows

        for(int col=0;col<row+1;++col){ // inner Loop for Columns 
            cout<<" *";
        }
        cout<<endl; // to Jump to new Line After each Column number complete

    }
    return 0;

 }