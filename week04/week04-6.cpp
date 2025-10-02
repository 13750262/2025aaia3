///week04-6.cpp
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>a; ///⊿Τヴ﹍て把计,琌0
    cout<<endl<<"皚a琌" <<a.size() <<endl;

    vector<int> b(3); ///Τ把计,癸莱跑Θ3
    cout<<endl<<"皚b琌" <<b.size() <<endl;
    for(int i=0; i<b.size(); i++) cout << b[i] <<" ";

    vector<int> c(3,88); ///琌3,柑常峨88
    cout <<endl<<"皚c琌" << c.size() <<endl;
    for(int i=0; i<c.size(); i++) cout << c[i] <<" ";

    int d[10] = {9,0,7,1,2,3,6,5,4,0};
    vector<int> f(d,d+4);
    cout <<endl<<"皚f琌" << f.size() <<endl;


    vector<int> g(d,d+10);
    cout <<endl<<"皚g琌" << g.size() <<endl;
    for(int i=0; i<g.size(); i++) cout << g[i] <<" ";

}
