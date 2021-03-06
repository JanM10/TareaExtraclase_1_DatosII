#include <iostream>
#define LOG(x) cout<< x << endl;
using namespace std;

int main() {

    int var = 8;
    int* ptr = &var;
    *ptr = 10;
    LOG(var);
    cout << "El lugar en memoria es: " << ptr <<endl;
    return 0;
}
