//week09-2.cpp 學習計畫 Maxis 第2題
//leecode 1572
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int M=mat.size(), N=mat[0].size(); //左手m右手n
        int ans=0;
        for(int i=0; i<M; i++){ //左手i vs m
            for(int j=0; j<N; j++){ //右手j vs n
                //if(是對角線的話)ans+=mat[i][j];
                if(i==j || i+j==N-1) ans += mat[i][j];
            }
        }
        return ans;
    }
};
