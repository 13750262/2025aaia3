///cin cout 讀入 印出資料
///string 字串的功能
///把設定compiler c++11打勾
#include <iostream>
#include <string>

using namespace std;
int main()
{
	string a; ///宣告字串a

	cin >> a; ///讀入字串a
	string ans; ///宣告字串ans 放答案用的
	int N = a.length(); ///字串a的長度
	for(int i=N-1; i>=0; i--){ ///倒過來的迴圈
		ans+= a[i];  ///在迴圈裡,把a[i] 塞到ans的後面
	}
	cout << a << "+" << stoi(ans) << "="
	 << stoi(a)+stoi(ans) <<endl;
 ///stoi=string to int 把字串變成整數

}
