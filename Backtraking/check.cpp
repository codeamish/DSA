#include<bits/stdc++.h>


using namespace std;

class Solution {
public:


          
bool isSafe(vector<vector<int>>& grid, int i, int j) 
{  

        int N  = grid.size();
    
    return ( i < N && j < N && grid[i][j] == 0);
} 

    bool solvegridRec( vector<vector<int>>& grid, int i, int j,int& count) 
    { 
        int N  = grid.size();

        if ( i == N - 1 && j == N - 1 && grid[i][j] == 1) { 
            return true; 
        } 
  
        if (isSafe(grid, i, j)) {

            if(solvegridRec(grid,i+1,j+1,count))
            {
                count++;
                return true;
            }

            if (solvegridRec(grid, i + 1, j,count) == true) 
                count++;
                return true; 
  
            if (solvegridRec(grid, i, j + 1,count) == true) 
                count++;
                return true; 
  
    } 
  
    return false; 
}


    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int count = 0;
        solvegridRec(grid,0,0,count);
        if(!count) {return count;}
        else {return -1;}
    }
};