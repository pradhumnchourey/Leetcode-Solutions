class Solution {
public:
    bool judgeCircle(string moves) {
        int u, d, r, l;
        u = count(moves.begin(), moves.end(), 'U');
        d = count(moves.begin(), moves.end(), 'D');
        r = count(moves.begin(), moves.end(), 'R');
        l = count(moves.begin(), moves.end(), 'L');
        return (u==d && r==l);
    }
};