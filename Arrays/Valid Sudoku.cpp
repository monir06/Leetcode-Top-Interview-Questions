class Solution
{
public:
    bool isValidSudoku(vector<vector<char>>& board)
    {
        set<char> st;
        for (int i = 0; i < 7; i += 3)
            for (int j = 0; j < 7; j += 3)
                {
                    st.clear();
                    for (int k = i; k < i + 3; k++)
                        for (int l = j; l < j + 3; l++)
                            {
                                if (isdigit(board[k][l]))
                                    {
                                        if (st.count(board[k][l])) return false;
                                        st.insert(board[k][l]);
                                    }
                            }
                }
        for (int i = 0; i < 9; i++)
            {
                st.clear();
                for (int j = 0; j < 9; j++)
                    {
                        if (isdigit(board[i][j]))
                            {
                                if (st.count(board[i][j])) return false;
                                st.insert(board[i][j]);
                            }
                    }
            }
        for (int j = 0; j < 9; j++)
            {
                st.clear();
                for (int i = 0; i < 9; i++)
                    {
                        if (isdigit(board[i][j]))
                            {
                                if (st.count(board[i][j])) return false;
                                st.insert(board[i][j]);
                            }
                    }
            }
        return true;
    }
};