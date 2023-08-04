#include<iostream>
#include<limits.h>
using namespace std;

int find_max(int mrr[][3],int rows ,int columns,int maxi)
{
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if(maxi<mrr[i][j]){
                maxi=mrr[i][j];

            }
        }

    }
    return maxi;
}

        // function defination and declaration for finding min value from 2D-Array
    int find_min(int mrr[][3],int rows,int columns,int mini){
    
    // outer loop for traversing 
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if(mini>mrr[i][j]){
                mini=mrr[i][j];

            }
        }

    }
    return mini;
    
}

int main(){

    int mrr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int rows=3;
    int columns=3;

    int maxi =INT_MIN; // intializing variable maxi with INT_MIN
    int mini=INT_MAX; //  intializing variable mini with INT_MAX



  cout<<find_max(mrr,rows,columns,maxi)<<endl; // function calling and printing max value from 2D-array
  cout<<find_min(mrr,rows,columns,mini)<<endl; // function calling and printinf min value from 2D-array


return 0;
}

