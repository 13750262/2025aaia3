//week08-2.cpp leecde學習計畫 Matrix第四題
//73. set Matrix Zero 設成一堆0
//不能一邊讀 一邊設成0 ,先讀完再設0
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //第1階段   先讀完 記下全部的0對應的I和J
        int M = matrix.size(), N=matrix[0].size(); //左手M 右手N
        vector<int> markI(M,0), markJ(N,0); //宣告c++的陣列,長度分別MN裡面設成0
        for(int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                if(matrix[i][j]==0){ //要記下對應的I J
                    markI[i] = 1; //標記一下 i的整橫條 都清為0
                    markJ[j] = 1; //標記一下 j的整橫條 都清為0

                }
            }
        }
        //第二階段 照著markI 和 markJ的標記 把整條都清為0
        for (int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                if(markI[i]==1 || markJ[j]==1)matrix[i][j] = 0;
            }//如果有標記,再把對應的項變成0
        }
    }
};
