#include<iostream>
using namespace std;

int main(){

    int rows;
    cout<<"Enter the Number of Rows : ";
    cin>>rows;
    // Pyramid
    for(int i=0;i<rows;++i){
       int k=0;
        for(int j=0;j<2*rows-1;++j){
            //space
            if(j<rows-i-1){ 
                cout<<"  ";
            }
                //stars
            else if(k<2*i+1){
                cout<<"* ";
                k++;
            }
            // spaces after *
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    // Inverted Pyramid
    int s=rows;
    for(int i=0 ;i<rows;++i){
        //spaces
        for(int j=0;j<i;++j){
            cout<<"  ";
        }
        // stars
        for(int j=0;j<s*2-1;++j){
            cout<<"* ";
        }
        cout<<endl;
        s--;
    }

}