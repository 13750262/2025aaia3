//week12-2.cpp
//兩邊和大於第三邊
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end()); //先排序

        //先練習倒過來的迴圈,把大到小印出來
        //for(int i=nums.size()-1; i>=0; i--){
        //    cout << nums[i] <<" ";
         //把大到小排出來

        for (int i=nums.size()-1; i>=2; i--){
            if(nums[i] <nums[i-1] + nums[i-2]){
                return nums[i] + nums[i-1] + nums[i-2];

            }
        }
        return 0;
    }
};
