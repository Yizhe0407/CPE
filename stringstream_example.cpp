#include <iostream>
#include <sstream>
using namespace std;
int main(){
    stringstream ss("hello my name is max");
    string str;
    while(getline(ss,str,'m')){
        cout << str << endl;
    }
    
    return 0;
}