
#include<bits/stdc++.h>
using namespace std;
#define n 4

bool is_safe(int newx, int newy, vector< vector<bool>> &vis, vector<vector< int>> & maze) {

     if((newx >=0 && newx <n) && (newy >=0 && newy <n ) && vis[newx][newy] != 1 && maze[newx][newy] == 1) {
          return true;
     } else {
          return false;
     }
}


void solve(int x, int y, vector<vector< int>> & maze, vector<string> &ans, vector<vector<bool>> &visited, string path) {
     //base case
     if(x == n-1 && y == n-1) {
          ans.push_back(path);
          return;
     }

     // 4 movement
     // d, l , r, u

     //down
     visited[x][y] =1;

     if(is_safe(x+1, y, visited, maze)) {
          solve(x+1, y, maze, ans, visited, path+'D');
     }

     //left
     if(is_safe(x, y-1, visited, maze)) {
          solve(x, y-1, maze, ans, visited, path+'L');
     }

     //right
     if(is_safe(x, y+1, visited, maze)) {
          solve(x, y+1, maze, ans, visited, path+'R');
     }

     //up
     if(is_safe(x-1, y, visited, maze)) {
          solve(x-1, y, maze, ans, visited, path+'U');
     } 

     visited[x][y] = 0;
}

vector< string > searchMaze(vector<vector< int>> & maze) {
     vector<string> ans;
     vector<vector<bool>> visited (n, vector<bool> (n,0));
     string path = "";

     if(maze[0][0] == 0) {
          return ans;
     }
     
     solve(0,0, maze, ans, visited, path);
     return ans;
}


vector<vector <int> > make_input() {
     
     vector< vector<int> > maze;  //(n, vector<int>(n,0));
     

     maze = {
          {1, 0, 0, 0},
          {1, 1, 0, 0},
          {1, 1, 0, 0},
          {0, 1, 1, 1}
     };

     return maze;


}

int main() {

     vector< vector<int>> maze = make_input();
     vector<string> ans = searchMaze(maze);

     for(auto i : ans) {
          cout << i << endl;
     }
}
