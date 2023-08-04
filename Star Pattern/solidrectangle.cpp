#include<iostream>
using namespace std;
 int main(){
  
  int num_Row,num_Col;

  cout<<"Enter the number of Rows : ";
  cin>>num_Row;

  cout<<"Enter the Number of  Columns : ";
  cin>>num_Col;

  for(int row=0 ;row<num_Row;++row){ // outer Loop for rows

    for(int col=0 ;col<num_Col;++col){ // Innner for columns

        cout<<" *";

    }
    cout<<endl; // to jump next line after each column exectued
  }


 }