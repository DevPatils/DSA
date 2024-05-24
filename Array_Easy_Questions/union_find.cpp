#include <iostream>
using namespace std ;
#include <set>
#include <vector>

//Brute
int find_union(int arr1[],int arr2[],int n1 , int n2){
    set<int> union_arr;
    for(int i =0; i<n1;i++){
        union_arr.insert(arr1[i]);
    }
    for(int i =0; i<n2;i++){
        union_arr.insert(arr2[i]);
    }
    vector<int> temp;
    for(auto it : union_arr){
        temp.push_back(it);
    }
    
    for(auto it : union_arr){
        cout<<it<<" ";
    }

}

//Optimal:
int find_union_optimal(int arr1[],int arr2[],int n1 , int n2){
    int i = 0;
    int j = 0;

    vector <int > union_arr;

    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            if(union_arr.size()==0 || union_arr.back()!=arr1[i]){
                union_arr.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(union_arr.size()==0 || union_arr.back()!=arr2[j]){
                union_arr.push_back(arr2[j]);
            }
            j++;           
        }
    }

    //Coditions for if one array is done and other is left : 
    while(j<n2){
            if(union_arr.size()==0 || union_arr.back()!=arr2[j]){
                union_arr.push_back(arr2[j]);
            }
            j++;

    }
    while(i<n1){
            if(union_arr.size()==0 || union_arr.back()!=arr1[i]){
                union_arr.push_back(arr1[i]);
            }
            i++;
    }
    for(auto it :union_arr ){
        cout<<it<<" ";
    }
}

int main(){
    int arr1[5] ={1,1,2,3,4} ;
    int arr2[5] ={5,5,5,10,4} ;
    find_union(arr1,arr2,5,5);
    // find_union_optimal(arr1,arr2,5,5);
    
}