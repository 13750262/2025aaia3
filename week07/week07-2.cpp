///week07-2.cpp
///�e�X�W�j�������,�Ʀr�]�_��
///TAICA ��j��¦�{���Ʀr(C++)�������D��6�D
#include <iostream> ///�N�Oc��math�̭��� sin() cos() abs() sqrt()
#include <cmath>
using namespace std;
int main()
{
    int n; ///part1 :intput
    cin >> n;

    for(int i=1; i<n*2; i++) { ///part2:output
        for(int j=1; j<n*2; j++){

            ///�L�X�Ӥ���,�o�{�F���ߪ�1�ܦ��N��
            int d = max(abs(i-n),abs(j-n));
            cout << d+1; ///cout << n;
        }
        cout<<endl; /// cout << �{�b\i�O:<<

    }///2�|��3�ӼӼh 3�|�����ӼӼh �|�|���C��

}
