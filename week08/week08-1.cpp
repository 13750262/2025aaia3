//week08-1.cpp 學習計畫
//1672. richest customer wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        for(int i=0; i<accounts.size(); i++){
            int now = 0; //迴圈前面 now=0
            for(int j=0; j<accounts[0].size(); j++){
                now += accounts[i][j]; //把錢加進來
            }//迴圈裏面 更新now 陣列左手i右手j
            //迴圈後面 now拿來用
            ans = max(ans, now); //最有錢的人. 更新答案
        }
        return ans;
    }
};
