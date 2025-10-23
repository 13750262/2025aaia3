//week07-4.cpp
//1041.Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        instructions = instructions + instructions + instructions + instructions;
        int x=0,y=0; //x�y��y�y�Ф@�}�l�n�b�쥻���y��
        int d = 0; ///d:��V 0:�_ 1:�F 2:�n 3:��
        //�k�� d=(d+1) %4�������l��
        //���� d=(d-1+4)%4 = (d+3)%4 ���M�i�H��L��
        int dx[4] = {0,1,0,-1}; //�e�i�@��� �|��z+=dx[d] �� y+=d[y]
        int dy[4] = {1,0,-1,0};//�o��� ,�O�a��2D��������� �M�w�e�i�h��
        for(char c :instructions){
            if(c=='G'){
                x += dx[d];
                y += dy[d];
            }else if (c=='R'){
                d = (d+1)%4;
            }else if (c=='L'){
                d= (d+3)%4;
            }
        }//���}�j��� ���M�|�@���� ���ɭԷ|�^����,���ɭԷ|�^��
        cout << 'x' << 'y' << y <<endl;
        if(x==0 && y==0) return true;
        else return false;
    }
};
