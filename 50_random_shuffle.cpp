#include <iostream>
#include <random>
#include <algorithm>
#include <ctime>

using namespace std;

int main() {
    string str1 = "1a2b3c4d5e6f7g";
    string str2 = "republic of korea";
    int data1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    srand(static_cast<unsigned int>(time(NULL)));
    shuffle(str1.begin(), str1.end(), default_random_engine(static_cast<unsigned int>(time(NULL))));
    for (auto i : str1)
        cout << i << ", ";

    return 0;
}