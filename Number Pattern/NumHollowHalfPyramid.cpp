#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    

    for(int i=0;i<n;++i){
        
        for(int j=0;j<i+1;++j){
            if(j==0 || j==i || i==n-1 ){  // printing Columns+1 at border of pyramid

                cout<<j+1<<" ";
            }
            else{       // printing spaces inside/hollow pyramuid
                cout<<"  ";
            }
            
            
        }
        cout<<endl;


    }
}