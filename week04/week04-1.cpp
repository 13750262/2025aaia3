//week04-1.cpp
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles;
        while(numBottles >= numExchange){ //�p�G�~�l�� >=�I���q,�N�I��
            numBottles = numBottles - numExchange +1; //�I���@�~����
            ans ++ ; //�h�ܤF�@�~
            numExchange ++; //�I�����зǦh�@�~
        }
        return ans;
    }
};
