//week08-2.cpp leecde�ǲ߭p�e Matrix�ĥ|�D
//73. set Matrix Zero �]���@��0
//����@��Ū �@��]��0 ,��Ū���A�]0
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //��1���q   ��Ū�� �O�U������0������I�MJ
        int M = matrix.size(), N=matrix[0].size(); //����M �k��N
        vector<int> markI(M,0), markJ(N,0); //�ŧic++���}�C,���פ��OMN�̭��]��0
        for(int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                if(matrix[i][j]==0){ //�n�O�U������I J
                    markI[i] = 1; //�аO�@�U i������ ���M��0
                    markJ[j] = 1; //�аO�@�U j������ ���M��0

                }
            }
        }
        //�ĤG���q �ӵ�markI �M markJ���аO �������M��0
        for (int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                if(markI[i]==1 || markJ[j]==1)matrix[i][j] = 0;
            }//�p�G���аO,�A����������ܦ�0
        }
    }
};
