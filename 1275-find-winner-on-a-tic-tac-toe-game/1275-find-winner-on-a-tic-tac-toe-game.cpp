class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int a, b, p;
        vector<vector<char>> board(3, vector<char> (3, ' '));
        for(int i=0; i<moves.size(); i++){
            if(i%2==0) 
                board[moves[i][0]][moves[i][1]]='X';
            else
                board[moves[i][0]][moves[i][1]]='O'; 
        }
        for(int i=0; i<3; i++){
            a=0, b=0;
            for(int j=0; j<3; j++){
                if(board[i][j]=='X')
                    a++;
                else if(board[i][j]=='O') 
                    b++;
                else if(board[i][j]==' ')
                    p++;
            }
            if(a==3)
                return "A";
            if(b==3) return "B";
        }
        for(int i=0; i<3; i++){
            a=0, b=0;
            for(int j=0; j<3; j++){
                if(board[j][i]=='X')
                    a++;
                else if(board[j][i]=='O')
                    b++;
                else if(board[j][i]==' ')
                    p++;
            }
            if(a==3)
                return "A";
            if(b==3) return "B";
        }
        a=0, b=0;
        for(int i=0; i<3; i++){
            if(board[i][i]=='X')
                a++;
            else if(board[i][i]=='O')
                b++;
            else if(board[i][i]==' ')
                p++;
        }
        if(a==3)
            return "A";
        if(b==3) return "B";
        a=0, b=0;
        int j=2;
        for(int i=0; i<3; i++){
            if(board[i][j]=='X')
                a++;
            else if(board[i][j]=='O')
                b++;
            else if(board[i][j]==' ')
                p++;
            j--;
        }
        if(a==3)
            return "A";
        if(b==3) return "B";
        if(p)
            return "Pending";
        return "Draw";
    }
};