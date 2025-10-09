///week05-3b.cpp
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{
    string line; //一行字的字串
    while ( getline(cin, line) ){
        stringstream ss(line);
        string word;
        while (ss >> word) {
                reverse( word.begin(),word.end());
                cout << "讀到了" << word <<endl;
        }
        cout << line << endl;
    }


}
