//Week07-3.cpp
//1275.find winner on a tic tac
class Solution {
public:                     //vector�Oc++���}�C,2d������g
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {}; //c�y���}�C �j�@�йL,���²��
//{}�j�A���N���l��
        int now = 1;
        int winner = 0;
        for (vector<int>& move : moves) {
            int i = move[0],j= move[1];
            a[i][j] = now; //��X�l�U�b�}�C��
            //�U����,�n�ˬd���S���o��1
            if(now==a[i][0] &&now==a[i][1] &&now==a[i][2]) winner = now;//��u
            if(now==a[0][j] &&now==a[1][j] &&now==a[2][j]) winner = now;//���u
            if(now==a[0][0] &&now==a[1][1] &&now==a[2][2]) winner = now;//���W�k�U�׽u
            if(now==a[0][2] &&now==a[1][1] &&now==a[2][0]) winner = now;//�k�W���U�׽u
            if(now==1) now = 2; //��H�洫 �@���G
            else now = 1; //��2��1
        }
        if(winner==1)return"A";
        else if(winner == 2) return"B";
        else if(moves.size()==9)return "Draw"; //���⪺�^��Draw
        else return"Pending";       //�e�X�h�o�{����4�إi�� �spendibng

    }
};
