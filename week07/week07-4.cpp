//week07-4.cpp
//1041.Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        instructions = instructions + instructions + instructions + instructions;
        int x=0,y=0; //x座標y座標一開始要在原本的座標
        int d = 0; ///d:方向 0:北 1:東 2:南 3:西
        //右轉 d=(d+1) %4取似的餘數
        //左轉 d=(d-1+4)%4 = (d+3)%4 竟然可以到過來
        int dx[4] = {0,1,0,-1}; //前進一格時 會走z+=dx[d] 及 y+=d[y]
        int dy[4] = {1,0,-1,0};//這兩行 ,是地圖2D模擬的精華 決定前進多少
        for(char c :instructions){
            if(c=='G'){
                x += dx[d];
                y += dy[d];
            }else if (c=='R'){
                d = (d+1)%4;
            }else if (c=='L'){
                d= (d+3)%4;
            }
        }//離開迴圈時 竟然會一直走 有時候會回不來,有時候會回來
        cout << 'x' << 'y' << y <<endl;
        if(x==0 && y==0) return true;
        else return false;
    }
};
