#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;++i){
        for(int j=0;j<n-i;++j){
            if(i==0 || j==0 || j==n-i-1){ // printing column+1 at the Border of Pyramid
            cout<<j+1<<" ";
            }
            else{       //printing spaces inside/Hollow pyramid
                cout<<"  ";
            }
            }
        cout<<endl;
        }
    }

