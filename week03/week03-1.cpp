///week03-1
#include <iostream> ///c++的cin cout
#include <vector> ///c++的陣列
using namespace std;
int main()
{
    vector<int> a(2); ///陣列,裡面有2格
    for(int i=0; i<a.size(); i++) cout << a[i] << ' ';///印出陣列
    cout << endl;

    a.push_back(99); ///把99推到陣列a的後面
    a.push_back(77); ///把99推到陣列a的後面

    for(int i=0; i<a.size(); i++) cout << a[i] << ' ';///印出陣列
    cout << endl;
}
