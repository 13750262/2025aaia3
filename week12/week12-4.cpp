//week12-4.cpp
//Leetcode 1232
//斜率 a:b = c:d或 a/b= c/d 或 a*d == b*c
//dx:sy = dxx:dyy或 dx*dyy == dy*dxx
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x0 = coordinates[0][0], y0 = coordinates[0][1];
        int x1 = coordinates[1][0], y1 = coordinates[1][1];
        int dx = x1 -x0, dy = y1 -y0; //dx是x的差值 dy是y的差值
        for(int i=2; i<coordinates.size(); i++){
            int xx =coordinates[i][0], yy=coordinates[i][1];
            //dx*dyy == dy*dxx 如果不是直接失敗
            if( dx*(yy-y0) != dy*(xx-x0)) return false;
        }//前面有失敗 就提早結束
        return true;//就成功了
    }
};
