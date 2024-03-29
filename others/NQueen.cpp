#include <iostream>
#include <vector>

using namespace std;

const int N = 8; // Change N to the desired size of the chessboard

// Function to check if a queen can be placed at position (row, col)
bool isSafe(vector<vector<int>>& board, int row, int col) {
    // Check if there is a queen in the same column
    for (int i = 0; i < row; ++i) {
        if (board[i][col] == 1)
            return false;
    }

    // Check upper left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; --i, --j) {
        if (board[i][j] == 1)
            return false;
    }

    // Check upper right diagonal
    for (int i = row, j = col; i >= 0 && j < N; --i, ++j) {
        if (board[i][j] == 1)
            return false;
    }

    return true; // If no conflicts, it's safe to place a queen
}

// Function to solve N-Queens problem using backtracking
bool solveNQueens(vector<vector<int>>& board, int row) {
    if (row == N) {
        // All queens are placed successfully
        // Print the board
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
        return true;
    }

    for (int col = 0; col < N; ++col) {
        if (isSafe(board, row, col)) {
            // Place the queen
            board[row][col] = 1;

            // Recur to place the rest of the queens
            if (solveNQueens(board, row + 1))
                return true;

            // If placing queen at (row, col) doesn't lead to a solution,
            // backtrack and remove the queen from the current position
            board[row][col] = 0;
        }
    }
    return false; // If a solution is not found
}

int main() {
    vector<vector<int>> board(N, vector<int>(N, 0));

    if (!solveNQueens(board, 0)) {
        cout << "Solution does not exist";
    }

    return 0;
}
