//week11-3.cpp
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5 = 0, d10 = 0, d20 = 0;
        for(int bill : bills){ //c++進階 for迴圈
            if(bill==5) d5++; //順利拿到5元鈔
            if(bill==10){ //客人給10元
                if(d5 <1) return false; //沒有5元鈔,失敗
                d10++; //拿到10元
                d5--; // 找出5元
            }
            if (bill==20){  //客人給20,找15
                if(d10>0 &&d5>0){
                    d20++;
                    d10--;
                    d5--;
                }else if(d5>=3){
                    d20++;
                    d5-=3;
                }else return false;

            }
        }
        return true;
    }
};
