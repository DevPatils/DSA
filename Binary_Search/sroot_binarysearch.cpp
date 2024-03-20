#include<iostream>
using namespace std;

int binary_search(int num){
    long long int start = 0;
    long long int end = num;
    long long int mid = start+(end-start)/2;
    long long int ans = 0;
    while(start<=end){
        int squre = mid*mid;
        // if(squre==num){
        //     return mid;
        // }
        if(squre<=num){   //if I write here squre<num Then only I need the first if block --->I found 
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}

double more_pricise(int num , int pre , int temp){
    double factor = 1;
    double ans = temp;

    for(int i = 0 ;i<pre ;i++ ){
        factor = factor/10;
        for(double j = temp;j*j<num;j=j+factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
long long int squreroot = binary_search(37);
// cout<<squreroot;
// cout<<endl;
double precission = more_pricise(37,3,squreroot);
cout<<precission;
}