#include <iostream>
using namespace std;
int main(){
    const int kArraySize = 3;
    int founding[kArraySize];
    founding[0] = 918;
    founding[1] = 1392;
    founding[2] = 1948;

    for (int i=0; i<7; i++){
        cout << "고려 건국 연도: " << founding[i] << endl;
    }
}