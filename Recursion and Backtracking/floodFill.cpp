#include<iostream>
#include<vector>

using namespace std;

void floodFill(const vector<vector<bool>>& maze,vector<vector<bool>>& visited,int row=0,int col=0,string output=""){
    if(row<0 || col<0 || row==maze.size() || col==maze[0].size() || maze[row][col]==true || visited[row][col]==true){
        return;
    }
    if(row==maze.size()-1 && col==maze[0].size()-1){
        cout<<output<<"\n";
        return;
    }

    visited[row][col]=true;

    floodFill(maze,visited,row-1,col,output+"t");
    floodFill(maze,visited,row,col-1,output+"l");
    floodFill(maze,visited,row+1,col,output+"d");
    floodFill(maze,visited,row,col+1,output+"r");

    visited[row][col]=false;

    //return;
}
int main(void){
    vector<vector<bool>> maze{{0,0,1},{0,1,1},{0,0,0}};
    vector<vector<bool>> visited(maze.size(),vector<bool>(maze[0].size(),false));

    floodFill(maze,visited);

    return 0;
}