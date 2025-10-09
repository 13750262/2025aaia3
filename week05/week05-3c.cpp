///week05-3c.cpp
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
        ss >> word;
        reverse( word.begin(), word.end() );
        cout << word;
        while (ss >> word) {
                reverse( word.begin(),word.end());
                cout << " " << word ;
                ///cout << "讀到了" << word <<endl;
        }
        cout << endl;
    }


}
