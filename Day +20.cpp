//Sorting
//program to sort an array using bubble sort and print as instructed

#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int numSwaps = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                numSwaps++;
            }
        }
        if (numSwaps == 0) break;
    }

    printf("Array is sorted in %i swaps.\n", numSwaps);
    printf("First Element: %i\n", arr[0]);
    printf("Last Element: %i\n", arr[arr.size() - 1]);

    return 0;
}
