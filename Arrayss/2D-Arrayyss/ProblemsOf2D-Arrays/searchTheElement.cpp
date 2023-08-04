#include<iostream>
using namespace std;
bool find_key(int crr[][5],int rows ,int columns,int key){ //key, (Note- when passing the array in function we need provide/fill all square bracket except the 1st)
    for(int i=0;i<rows;i++){ // outer loop for traversing rows
        for (int j=0;j<columns;j++){ // inner loop for traversing columns
            if(key==crr[i][j]){ // key == element
                return  true;
            }
        }
    }
 return false;
}

int main(){
    int crr[5][5]={{1,3,5,7,9},{2,4,6,8,0},{11,13,15,17,19},{12,14,16,18,20},{21,22,23,24,25}};
    int rows=5;
    int columns=5;

    int key=25; // create variable name key in which the element is to search is stored

    cout<<find_key(crr,rows,columns,key)<<endl; // function caliing 1=true and 0=false;
    if(find_key(crr,rows,columns,key)){

        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}