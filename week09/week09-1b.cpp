//week09-1b.cpp
//sott106_advance_004
#include <iostream>
using namespace std;

int main()
{
	char c;
	while(cin >> c){
		if(c>='A' && c<='Z') c=c-'A'+'a';
		else if(sc>='a' && c<='Z') c=c-'a'+'A';
		cout << c;
	}
	cout << "\n";
}
