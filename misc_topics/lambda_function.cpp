

#include <iostream>

using namespace std;

int main(int argc, char *argvp[]) {
    int x = 5;
    int y = 10;

    auto var = [x, y](int k) {
        return x * y * k;
    };

    cout << var(5) << endl;

    return 0;
}