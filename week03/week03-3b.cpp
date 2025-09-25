//week03-3b.cpp 不是0的找出來
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0; //直接移動 nums[k] = nums[i], 再k++
        for(int i=0; i<nums.size(); i++){
            if(nums[i] !=0) nums[k++] = (nums[i]);
        }
        for(int i=k; i<nums.size(); i++){
            nums[i] = 0;
        }
    }
};
