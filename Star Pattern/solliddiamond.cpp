#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the Number of Rows";
    cin>>rows;
        // Pyramid
        for(int i=0;i<rows;++i){
            //spaces
            for(int j=0;j<rows-i-1;++j){
                cout<<" ";           
             }
             //stars
             for(int j=0;j<i+1;++j){
                cout<<"* ";

             }
             cout<<endl;
        }
            // Inverted Pyramid
        for(int i=0;i<rows;++i){
            //spaces
            for(int j=0;j<i;++j){
                cout<<" ";
            }
            //stars
            for(int j=0;j<rows-i;++j){
                cout<<"* ";
            }
            cout<<endl;
        }
        return 0;
}