#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

unordered_map<int ,bool> rowCheck;
unordered_map<int ,bool> upperDiagonalCheck;
unordered_map<int ,bool> bottomDiagonalCheck;

void printSolution(vector<vector<char>> &board,int n){
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
           cout<< board[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}


bool issafe(int row,int col,vector<vector<char>> &board,int n){
    if(rowCheck[row]==true)
        return false;
    if(upperDiagonalCheck[n-1+col+row]==true)
        return false;
    if(bottomDiagonalCheck[row+col]==true)
        return false;
        

    return true;
}
void solve(vector<vector<char>> &board,int col,int n) {
    //base case 
    while(col>=n){
        printSolution(board,n);
        return;
    }

    //solve one case rest recursion will handle
    for(int row=0;row<n;row++){
        if(issafe(row,col,board,n)){
            board[row][col]='Q';
             rowCheck[row]=true;
                          
             upperDiagonalCheck[n-1+col-row]=true;
                             
             bottomDiagonalCheck[row+col]=true;
            solve(board,col+1,n);
        //backtracking
             board[row][col]='-';
             rowCheck[row]=false;
                          
             upperDiagonalCheck[n-1+col-row]=false;
                             
             bottomDiagonalCheck[row+col]=false;
        
        }

    }
}


int main() {
    int n;
    cout<<"Enter the dimension of board n*n : ";
    cin>>n;

    vector<vector<char>> board(n,vector<char>(n,'-'));
    int col=0;

    solve(board,col,n);


    return 0;
}
