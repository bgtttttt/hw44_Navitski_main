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
//int count_non_zero(int* arr, int size) {
//    int non_zero_count = 0;
//    for (int i = 0; i < size; ++i) {
//        if (arr[i] != 0) {
//            non_zero_count++;
//        }
//    }
//    return non_zero_count;
//}
//int sum_of_non_zero_elements(int* arr, int size) {
//    int sum = 0;
//    for (int i = 0; i < size; ++i) {
//        if (arr[i] != 0) {
//            sum += arr[i];
//        }
//    }
//    return sum;
//}
//double arithmeticAvg(int sum, int non_zero_count) {
//    if (non_zero_count > 0) {
//        double avg = sum*1.0 / non_zero_count;
//        return avg;
//    }
//    else {
//        return 0.0;
//    }
//}
//
//int main() {
//    int size, min, max;
//    do {
//        cout << "Enter the length, min and max values: \n";
//        cin >> size >> min >> max;
//    } while (size <= 0);
//
//    int* arr = new int[size];
//    randArr(arr, size, min, max);
//
//    int sum = sum_of_non_zero_elements(arr, size);
//    int non_zero_count = count_non_zero(arr, size);
//
//    double arithm_avg = arithmeticAvg(sum, non_zero_count);
//
//    cout << "Vector elements: " << getArrElements(arr, size) << "\n";
//    cout << "Sum of vector elements: " << sum << "\n";
//    cout << "Number of non-zero vector elements: " << non_zero_count << "\n";
//    cout << "The arithmetic mean of the non-zero elements of the vector is " << arithm_avg << "\n";
//
//    return 0;
//}
