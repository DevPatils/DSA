#include <vector> 
#include <iostream> 
using namespace std;

//Brute force
void intersection(int a[], int b[], int n1, int n2) {
    vector<int> ans;
    int visited[n2] = {0};
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j] && visited[j] == 0) {
                ans.push_back(a[i]);
                visited[j] = 1;
                break;
            }
            // if (b[j] > a[i]) {
            //     break;
            // }
        }
    }
    for (auto it : ans) {
        cout << it << " ";
    } 
}

//Optimal
void intersection_optimal(int a[], int b[], int n1, int n2){
    vector <int> ans;
    int i = 0;
    int j = 0;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<a[i]){
            j++;
        }
        else{
            ans.push_back(a[i]);
        }
    }
        for (auto it : ans) {
        cout << it << " ";
    } 
}


int main() {
    int arr1[5] = {1, 1, 2, 3, 4};
    int arr2[5] = {1, 5, 2, 10, 4};

    intersection_optimal(arr1, arr2, 5, 5);
}
