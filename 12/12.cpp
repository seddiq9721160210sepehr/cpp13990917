#include<fstream>
#include<iostream>

using namespace std;
int main(){
    int i;
    ofstream f1("2.out.txt");
    for(i=0 ;i < 10;i+2){
        f1 << i <<endl;
    }
    f1 << "sepehrseddiq" <<endl;
    f1.close();
    return 0;
}
