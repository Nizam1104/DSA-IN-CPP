
// #include<bits/stdc++.h>
// using namespace std;
// #define n 4

// bool isSafe_to_place(int board[n][n], int row, int col) {
//      int i, j;

//      for(int i=0; i<col; i++) {
//           if(board[row][i])
//           return false;
//      }

//      for(i = row, j = col; j >= 0 && i<n; i--, j--) {
//           if(board[i][j]) return false;
//      }

//      for(i=row, j = col; j>=0 && i<n; i++) {
//         if(board[i][j])
//         return false;
//      }

//      return true;
// }

// bool solveNQueen(int board[n][n], int col) {
//      if(col >= n) return true;

//      for(int i=0; i<n; i++) {
//           if(isSafe_to_place(board, i, col)) {
//           board[i][col] = 1;

//           if(solveNQueen(board, col+1)) 
//           return true;

//           board[i][col] = 0;
//      }
//      }

//      return false;
// }

// void printOutPut(int board[n][n]) {
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<n; j++) {
//             cout << board[i][j] << " ";
//         }
//         cout << "\n";
//     }
// }

// bool solveNQ() {
//      int board[n][n] = {
//           {0, 0, 0, 0},
//           {0, 0, 0, 0},
//           {0, 0, 0, 0},
//           {0, 0, 0, 0}
//      };

//      if(solveNQueen(board, 0) == false) {
//           cout << "solution does not exist";
//           return false;
//      }

//      printOutPut(board);
//      return true;

// }

// int main() {
     
//      solveNQ();
// }


#include<bits/stdc++.h>
using namespace std;
#define n 4


bool is_safe_to_place(int board[n][n], int row, int col) {

    int i, j;

    for(i=0; i<n; i++) {
        if(board[row][i])
        return false;
    }

    for(i=row, j=col; i >=0 && j >=0; i--, j--) {
        if(board[i][j]) return false;
    }

    for(i=row, j=col; i<n && j>=0; i++, j--) {
        if(board[i][j]) return false;
    }

    return true;
}

bool solveNQueen(int board[n][n], int col) {

    if(col >=n) return true;

    for(int i=0; i<n; i++) {
        if(is_safe_to_place(board, i, col)) {
            board[i][col] = 1;

            if(solveNQueen(board, col+1))
            return true;

            board[i][col] = 0;
        }
    }

    return false;

}


void print_board(int board[n][n]) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
}


bool make_board() {
    int board[n][n] = {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };

    if(solveNQueen(board, 0) == false) {

        cout << "solution does not exist";
        return false;
    }

    print_board(board);
    return true;
}


int main() {

    make_board();
    return 0;
}



// /* C++ program to solve N Queen Problem */

// #include <bits/stdc++.h>
// using namespace std;

// #define N 4

//   /* A function to check if a queen can
//    be safely placed on board[row][col]. */
// bool isSafe_to_place(int board[N][N], int row, int col)
// {
//     int i, j;
  
//     /* Checking this row on left side */
//     for (i = 0; i < col; i++)
//         if (board[row][i])
//             return false;
  
//     /* Checking upper diagonal on left side */
//     for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
//         if (board[i][j])
//             return false;
  
//     /* Checking lower diagonal on left side */
//     for (i = row, j = col; j >= 0 && i < N; i++, j--)
//         if (board[i][j])
//             return false;
  
//     return true;
// }
  
// /* A recursive function to solve N
//    Queen problem */
// bool solveNQueen(int board[N][N], int col)
// {
//     /* base case: If all queens are placed
//       then return true */
//     if (col >= N)
//         return true;
  
//     /* Consider this column and try placing
//        this queen in all rows one by one */
//     for (int i = 0; i < N; i++) {
//         /* Check if the queen can be placed on
//           board[i][col] */
//         if (isSafe_to_place(board, i, col)) {
//             /* Place this queen in board[i][col] */
//             board[i][col] = 1;
  
//             /* recur to place rest of the queens */
//             if (solveNQueen(board, col + 1))
//                 return true;
  
//             /* If queen cannot be placed then simply backtrack 
//                 and try other configurations */
// 			board[i][col] = 0; // BACKTRACK
//         }
//     }
  
//     /* If the queen cannot be placed in any row in
//         the current column then return false */
//     return false;
// }
  
// /*  function to print output solution */
// void printOutput(int board[N][N])
// {
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++)
//             cout<<board[i][j];
//         cout<<"\n";
//     }
// }

// /* This function solves the N Queen problem using
//    Backtracking. */
// bool solveNQ()
// {
//     int board[N][N] = { { 0, 0, 0, 0 },
//                         { 0, 0, 0, 0 },
//                         { 0, 0, 0, 0 },
//                         { 0, 0, 0, 0 } };

  
//     if (solveNQueen(board, 0) == false) {
//         cout<<"Solution does not exist";
//         return false;
//     }

//     printOutput(board);

//     return true;
// }
  
// // driver program to test above function
// int main()
// {
//     solveNQ();
//     return 0;
// }

