//week08-1.cpp �ǲ߭p�e
//1672. richest customer wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        for(int i=0; i<accounts.size(); i++){
            int now = 0; //�j��e�� now=0
            for(int j=0; j<accounts[0].size(); j++){
                now += accounts[i][j]; //����[�i��
            }//�j���ح� ��snow �}�C����i�k��j
            //�j��᭱ now���ӥ�
            ans = max(ans, now); //�̦������H. ��s����
        }
        return ans;
    }
};
