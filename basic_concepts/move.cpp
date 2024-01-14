
#include <iostream>
#include <utility>

using namespace std;

int main(int argc, char *argvp[]) {

    string str1 = "Siddhartha";
    string str2 = str1; // Copy semantics

    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl;

    string str3 = "Siddhartha Ram";
    string str4 = std::move(str3);

    cout << "String 3: " << str3 << endl;
    cout << "String 4: " << str4 << endl;

    return 0;
}