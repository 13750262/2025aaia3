//week03-3a.cpp 不是0的找出來
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans; //用來放不是0的數
        for(int i=0; i<nums.size(); i++){
            if(nums[i] !=0) ans.push_back(nums[i]);
        }    //不是0的放入ans暫放
        //再用for迴圈放回去
        for(int i=0; i<nums.size(); i++){
            if(i < ans.size()) nums[i] = ans[i]; //塞回去
            else nums[i] = 0; //其他的放0
        }
    }
};
