///week03-1
#include <iostream> ///c++��cin cout
#include <vector> ///c++���}�C
using namespace std;
int main()
{
    vector<int> a(2); ///�}�C,�̭���2��
    for(int i=0; i<a.size(); i++) cout << a[i] << ' ';///�L�X�}�C
    cout << endl;

    a.push_back(99); ///��99����}�Ca���᭱
    a.push_back(77); ///��99����}�Ca���᭱

    for(int i=0; i<a.size(); i++) cout << a[i] << ' ';///�L�X�}�C
    cout << endl;
}
