

#include <iostream>
#include <stdlib.h>

using namespace std;

void print_array(int *a, int arr_size) {
    for (int i = 0; i < arr_size; i++) {
        cout << a[i] << "\t";

        if (i && i % 8 == 0) cout << endl;
    }
}

int main(int argc, char *argv[])
{
    int arr_size = 1 << 6;
    int set[arr_size];
    srand( (unsigned)time(NULL) );

    for (int i = 0; i < arr_size; i++) set[i] = rand();

    cout << "Set before sorting with merge sort" << endl;

    print_array(set, arr_size);

    return 0;
}