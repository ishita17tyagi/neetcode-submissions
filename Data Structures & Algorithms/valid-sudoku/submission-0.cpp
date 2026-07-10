class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> st;
        int rows = board.size();
        int cols = board[0].size();
        for(int i=0;i<rows;i++){
            st.clear();
            for(int j=0;j<cols;j++){
                if(board[i][j]=='.')    continue;
                else if(st.count(board[i][j]))   return false;
                else st.insert(board[i][j]);
            }
        }
        for(int i=0;i<cols;i++){
            st.clear();
            for(int j=0;j<rows;j++){
                if(board[j][i]=='.')    continue;
                else if(st.count(board[j][i]))   return false;
                else st.insert(board[j][i]);
            }
        }
        for (int boxRow = 0; boxRow < rows; boxRow += 3) {
            for (int boxCol = 0; boxCol < cols; boxCol += 3) {
                st.clear();
                for (int i = boxRow; i < boxRow + 3; i++) {
                    for (int j = boxCol; j < boxCol + 3; j++) {
                        if (board[i][j] == '.')
                        continue;
                        if (st.count(board[i][j]))
                            return false;
                        st.insert(board[i][j]);
                    }
                }
            }
        }
        return true;
    }
};
