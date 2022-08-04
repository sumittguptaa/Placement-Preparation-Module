class Solution {
public:
    bool notInRow(vector<vector<char>>& board, int row)
{
    // Set to store characters seen so far.
    set<char> st;
 
    for (int i = 0; i < 9; i++) {
 
        // If already encountered before, return false
        if (st.find(board[row][i]) != st.end())
            return false;
 
        // If it is not an empty cell, insert value
        // at the current cell in the set
        if (board[row][i] != '.')
            st.insert(board[row][i]);
    }
    return true;
}
    
    bool notInCol(vector<vector<char>>& board, int col)
{
    set<char> st;
 
    for (int i = 0; i < 9; i++) {
 
        // If already encountered before, return false
        if (st.find(board[i][col]) != st.end())
            return false;
 
        // If it is not an empty cell,
        // insert value at the current cell in the set
        if (board[i][col] != '.')
            st.insert(board[i][col]);
    }
    return true;
}
    bool notInBox(vector<vector<char>>& board, int startRow, int startCol)
{
    set<char> st;
 
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            char curr = board[row + startRow][col + startCol];
 
            // If already encountered before, return false
            if (st.find(curr) != st.end())
                return false;
 
            // If it is not an empty cell,
            // insert value at current cell in set
            if (curr != '.')
                st.insert(curr);
        }
    }
    return true;
}
    
    bool isValid(vector<vector<char>>& board, int row, int col){
    return notInRow(board, row) && notInCol(board, col) &&
           notInBox(board, row - row % 3, col - col % 3);
}
    
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
 
            // If current row or current column or
            // current 3x3 box is not valid, return false
            if (!isValid(board, i, j))
                return false;
        }
    }
    return true;
    }
    

    
};
