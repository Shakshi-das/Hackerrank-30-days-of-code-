//Generic
//program to print each element of a generic array parameters in a function

#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<typename Element>

void printArray(vector<Element> arr) {
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << endl;
}
