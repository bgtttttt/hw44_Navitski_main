#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void randArr(int* arr, int size, int min, int max) {
    if (min > max) {
        swap(min, max);
    }
    srand(time(0));
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % (max - min + 1) + min;
    }
}
string getArrElements(int* arr, int size) {
    string s = "";
    for (int i = 0; i < size; ++i) {
        s += to_string(arr[i]) + " ";
    }
    return s;
}
bool haveDifferentValues(int* arr, int size) {
    for (int a = 0; a < size - 1; a++) {
        for (int b = a + 1; b < size; b++) {
            if (arr[a] == arr[b]) {
                return false;
            }
        }
    }
    return true;
}


int main() {
    int size, min, max;
    cout << "Enter the length, min and max values: \n";
    cin >> size >> min >> max;

    int* arr = new int[size];
    randArr(arr, size, min, max);
    string msg = haveDifferentValues(arr, size) ? "have" : "have't";
    cout << "Vector elements: " << getArrElements(arr, size) << "\n";
    cout << "Vector " << msg << " different values\n";

    return 0;
}
