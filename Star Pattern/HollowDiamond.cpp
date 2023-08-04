#include<iostream>
using namespace std;

int main(){

int rows;
cout<<"Enter the Number of Rows : ";
cin>>rows;
// Upper Hollow Part
for(int i=0;i<rows;++i){

    for(int j=0;j<rows-i-1;++j){ // printing spaces before printing *
        cout<<"  ";
    }
    for(int j=0;j<2*i+1;++j){ // 2*i+1==total number of Columns include spaces
        if(j==0 || j==2*i){  // printing * only at 1st and last columns after spaces
            cout<<"* ";
        }
        else{
            cout<<"  "; // printing spaces as between * (i.e hollow part)
        }
    }
cout<<endl;
}
//Inverted Hollow Parts
for(int i=0;i<rows;++i){
    for(int j=0;j<i;++j){ // printing spaces before printing *
        cout<<"  ";
    }
    for(int j=0;j<2*rows-(2*i+1);++j){ // 2*i+1==total number of Columns include spaces
        if(j==0 || j==2*rows-2*i-2){ // print * at 1st and last column after spaces
            cout<<"* ";
        
        }
        else{
            cout<<"  ";  // printing spaces as between * (i.e hollow part)
        }
    }
    cout<<endl;
}
return 0;
}