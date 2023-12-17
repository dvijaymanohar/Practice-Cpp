#include <iostream>
#include <functional>
#include <typeinfo>

using namespace std;

auto main(int argc, char *argv[]) -> int {
    (void) argc;
    (void) argv;

    cout << "Hello VMD" << endl;

    auto x = 1 + 1.2;

    cout << "Type of x : " << typeid(x).name() << endl;

    cout << "Addition of different number types: " << std::plus<>{}(1, 1.23) << endl;

    return 0;
}
