//Week07-3.cpp
//1275.find winner on a tic tac
class Solution {
public:                     //vector是c++的陣列,2d比較難寫
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {}; //c語言陣列 大一教過,比較簡單
//{}大括號代表初始值
        int now = 1;
        int winner = 0;
        for (vector<int>& move : moves) {
            int i = move[0],j= move[1];
            a[i][j] = now; //把旗子下在陣列裡
            //下完後,要檢查有沒有得勝1
            if(now==a[i][0] &&now==a[i][1] &&now==a[i][2]) winner = now;//橫線
            if(now==a[0][j] &&now==a[1][j] &&now==a[2][j]) winner = now;//直線
            if(now==a[0][0] &&now==a[1][1] &&now==a[2][2]) winner = now;//坐上右下斜線
            if(now==a[0][2] &&now==a[1][1] &&now==a[2][0]) winner = now;//右上左下斜線
            if(now==1) now = 2; //兩人交換 一換二
            else now = 1; //或2換1
        }
        if(winner==1)return"A";
        else if(winner == 2) return"B";
        else if(moves.size()==9)return "Draw"; //平手的英文Draw
        else return"Pending";       //送出去發現有第4種可能 叫pendibng

    }
};
