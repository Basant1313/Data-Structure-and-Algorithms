#include <iostream>
#include <vector>
using namespace std;

void printSolution(vector<vector<char>> &board,int n){
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            cout<<board[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}

bool issafe(int row,int col,vector<vector<char>> &board,int n ){
    //check left row 
    int i=row,j=col;
    while(j>=0){
       if( board[i][j]=='Q'){

        return false;
       }
    j--;
    }
     
    i=row,j=col;
     
    //check upper left diagonal
    while(i>=0 && j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        i--;
        j--;
    }

     i=row,j=col;
    //check bottom diagonal
    while(i<n && j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

void solve(vector<vector<char>> &board, int col,int n){

    //base case
    while(col>=n){
        printSolution(board,n);
        return;
    }

    // ek case solve kardo baki recursion sambal lega
    for(int row=0;row<n;row++){
        if(issafe(row,col,board,n)){
            //rakh do
            board[row][col]='Q';
            // baki recursion sambhal lega

            solve(board,col+1,n);

        //backtracking
        board[row][col]='-';
        }

    }
}

int main(){
    int n;
    cout<<"Enter the Board Dimension n*n you want : ";
    cin>>n;

    vector<vector<char>>board(n,vector<char>(n,'-'));
    int col=0;

    solve(board,col,n);


    return 0;
}