#include <iostream>
using namespace std;

const int n = 4; // fixed rows
const int m = 4; // fixed columns

template <size_t rows, size_t cols>
void mark_row(int (&arr)[rows][cols], int i) {
    for (int j = 0; j < cols; j++) {
        if (arr[i][j] != 0) {
            arr[i][j] = -1;
        }
    }
}

template <size_t rows, size_t cols>
void mark_col(int (&arr)[rows][cols], int j) {
    for (int i = 0; i < rows; i++) {
        if (arr[i][j] != 0) {
            arr[i][j] = -1;
        }
    }
}

template <size_t rows, size_t cols>
void setZeros(int (&arr)[rows][cols]) {  //BRUTE
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == 0) {
                mark_row(arr, i);
                mark_col(arr, j);
            }
        }
    }

    // Final pass to set -1 to 0
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == -1) {
                arr[i][j] = 0;
            }
        }
    }
}

//Better
template <size_t n, size_t m>
void setZerosbetter(int (&arr)[n][m]){
    int col[m]={0};
    int row[n]={0};
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i]==1 || col[j]==1){
                arr[i][j]=0;
            }
        }
    }
}


int main() {
    int arr[n][m] = {
        {1, 1, 1, 1},
        {1, 0, 0, 1},
        {1, 1, 0, 1},
        {1, 1, 1, 1}
    };

    setZerosbetter(arr); // Pass the array without indexing it with [n][m]

    // Print the modified array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
