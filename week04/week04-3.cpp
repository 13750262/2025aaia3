//week04-3.cpp
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size();
        for(int i= N-1; i>=0; i--){
            if(digits[i]==9){
                digits[i]==0;
            }else{
                digits[i]++;
                return digits; //全部陣列當答案return
            }
        }
        digits.insert(digits.begin(), 1 ); //最左邊插入1
        return digits;
    }
};
