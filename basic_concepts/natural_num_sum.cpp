
#include <iostream>

using namespace std;

int main(int argc, char **argv) {

    unsigned int number;

    cout << "Enter a number here: ";
    cin >> number;

    cout << endl << "Sum of " << number << " natural numbers is " << (number * (number + 1) / 2) << endl;

    return 0;
}