#include <iostream>

using namespace std;

int* findMinValues(int ar[], int size, int& newSize) {
    int* minAr = new int(size);
    minAr[newSize] = ar[0];
    newSize++;
    for (int i=1; i<size; i++) {
        if (minAr[0] < ar[i]) {

            newSize = 1;
            minAr[0] = ar[i];

        }
        else if (minAr[0] == ar[i]) {
            minAr[newSize] = ar[i];
            newSize++;
        }

    }
    return minAr;
}


int main() {
    std::cout << "Hello, World!" << std::endl;

    int a[] = {
            3, 8, 3, 3, 10, 4, 8, 2, 10, 2, 3, 2
    };

    int newsize = 0;
    int* ab = findMinValues(a, 12, newsize);
    for (int i=0; i<newsize; i++) {
        cout << ab[i] << endl;
    }
    return 0;
}
