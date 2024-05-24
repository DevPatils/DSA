#include <iostream>
using namespace std;


void longest_subarray_brute(int arr[], int n, int k) {
    int maxLength = 0;  
    for (int i = 0; i < n; i++) {
        int sum = 0;  
        for (int j = i; j < n; j++) {
            sum += arr[j];  
            if (sum == k) {  
                maxLength = max(maxLength, j - i + 1);  
            }
        }
    }

    cout << maxLength;  
}

int main() {
    int arr[10] = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    longest_subarray_brute(arr, 10, 3); 
    return 0;
}
