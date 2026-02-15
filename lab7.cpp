//COMSC-210-5068, Lab7, Yang Liu

#include <iostream>
#include <string>
using namespace std;

const int ARRAY_SIZE = 5;

void displayArray(string* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

string* reverseArray(string* arr, int size) {
    string* left = arr;
    string* right = arr + size - 1;

    while (left < right) {
        string temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }
    return arr;
}

string* reverseArray(string* arr, int size);
void displayArray(string* arr, int size);

int main(){
    string* names = new string[ARRAY_SIZE] {
        "Janet", "Jeffe", "Jin", "Joe", "Junio"
    };

    cout << "Original array: ";
    displayArray(names, ARRAY_SIZE);

    string* reversedNames = reverseArray(names, ARRAY_SIZE);

    cout << "Reversed array: ";
    displayArray(reversedNames, ARRAY_SIZE);

    delete[] names;
return 0;
}