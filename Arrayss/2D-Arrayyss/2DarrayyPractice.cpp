#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int rows=3;
    int columns=3;
    
    cout<<"Row Wise Elemets Access : "<<endl;
    for (int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<arr[i][j]<<" "; //Rows Wise Element Access
        }
        cout<<endl;
    }

    cout<<"Column Wise Elements Access : "<<endl;
    for (int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<arr[j][i]<<" "; // Columns Wise Element Access
        }
        cout<<endl;
    }
    

    
return 0;

}