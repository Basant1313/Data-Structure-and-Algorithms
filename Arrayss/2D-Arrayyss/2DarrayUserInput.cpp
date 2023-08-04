#include<iostream>
using namespace std;

int main(){
    int brr[3][3];
    int rows=3;
    int columns=3;


    cout<<"Insert the Elements in Array : "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin>>brr[i][j];

        }
    }

    cout<<"Elements in 2D Array are : "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<brr[i][j]<<" ";

        }
        cout<<endl;
    }


}