//#include <iostream>
//#include <string>
//#include <ctime>
//
//using namespace std;
//
//void randArr(int* arr, int size, int min, int max) {
//    if (min > max) {
//        swap(min, max);
//    }
//    srand(time(0));
//    for (int i = 0; i < size; ++i) {
//        arr[i] = rand() % (max - min + 1) + min;
//    }
//}
//string getArrElements(int* arr, int size) {
//    string s = "";
//    for (int i = 0; i < size; ++i) {
//        s += to_string(arr[i]) + " ";
//    }
//    return s;
//}
//double arithmeticAvgNoMinMax(int sum, int size, int min_value, int max_value) {
//    sum = sum - min_value - max_value;
//    double avg = sum * 1.0 / (size - 2);
//    return avg;
//}
//int sumOfElem(int* arr, int size) {
//    int sum = 0;
//    for (int i = 0; i < size; i++) {
//        sum += arr[i];
//    }
//    return sum;
//}
//int getMin(int* arr, int size) {
//    int min = arr[0];
//    for (int i = 1; i < size; i++) {
//        if (min > arr[i]) {
//            min = arr[i];
//        }
//    }
//    return min;
//}
//int getMax(int* arr, int size) {
//    int max = arr[0];
//    for (int i = 1; i < size; i++) {
//        if (max < arr[i]) {
//            max = arr[i];
//        }
//    }
//    return max;
//}
//
//
//int main() {
//    int size, min, max;
//    cout << "Enter the length, min and max values: \n";
//    cin >> size >> min >> max;
//
//    int* arr = new int[size];
//    randArr(arr, size, min, max);
//
//    int minV = getMin(arr, size);
//    int maxV = getMax(arr, size);
//
//    double arithm_avg = arithmeticAvgNoMinMax(sumOfElem(arr, size), size, minV, maxV);
//
//    cout << "Vector elements: " << getArrElements(arr, size) << "\n";
//    cout << "Min vector element: " << minV << "\n";
//    cout << "Max vector element: " << maxV << "\n";
//    cout << "Arithmetic avg without min and max values of the vector: " << arithm_avg << "\n";
//
//    return 0;
//}
