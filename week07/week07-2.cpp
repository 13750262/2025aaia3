///week07-2.cpp
///畫出超大的正方形,數字包起來
///TAICA 交大基礎程式數字(C++)期中考題第6題
#include <iostream> ///就是c的math裡面有 sin() cos() abs() sqrt()
#include <cmath>
using namespace std;
int main()
{
    int n; ///part1 :intput
    cin >> n;

    for(int i=1; i<n*2; i++) { ///part2:output
        for(int j=1; j<n*2; j++){

            ///印出來之後,發現政中心的1很有意思
            int d = max(abs(i-n),abs(j-n));
            cout << d+1; ///cout << n;
        }
        cout<<endl; /// cout << 現在\i是:<<

    }///2會有3個樓層 3會有五個樓層 四會有七個

}
