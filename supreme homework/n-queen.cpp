#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
unordered_map<int,bool> rowcheck;
unordered_map<int,bool> upperleftcheck;
unordered_map<int,bool> lowerleftcheck;
int i=1;

bool isSafe(int row, int col, vector<vector<char>> board, int n)
{
    if(rowcheck[row]==true){
        return false;
    }
    if(upperleftcheck[n-1+col-row]==true){
        return false;
    }
    if(lowerleftcheck[col+row]==true){
        return false;
    }
    return true;
    // int i = row;
    // int j = col;

    // while(j>=0)
    // {
    //     if(board[i][j]==1){
    //         return false;
    //     }
    //     j--;
    // }

    // i = row;
    // j = col;

    // while(i>=0 && j>=0){
    //     if(board[i][j]==1){
    //         return false;
    //     }
    //     i--;
    //     j--;
    // }

    // i = row;
    // j = col;
    // while(i<n && j>=0){
    //     if(board[i][j]==1){
    //         return false;
    //     }
    //     i++;
    //     j--;
    // }
}

void printSolution(vector<vector<char>> board,int n)
{
    
    cout<<i++<<endl;
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            cout<<board[row][col]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<endl;
}

void solve(vector<vector<char>> board,int col,int n)
{
    if(col >= n){
        printSolution(board,n);
        return;
    }

    for(int row = 0; row<n;row++)
    {
        if(isSafe(row,col,board,n)){
            board[row][col] = 'Q';
            rowcheck[row]=true;
            upperleftcheck[n-1+col-row]=true;
            lowerleftcheck[col+row]=true;
            solve(board,col+1,n);
            board[row][col] = '.';
            rowcheck[row]=false;
            upperleftcheck[n-1+col-row]=false;
            lowerleftcheck[col+row]=false;
        }

    }
}
int main()
{
    int n = 8;
    vector<vector<char>> board(n, vector<char>(n,'.'));
    int col = 0;
    solve(board,col,n);
}