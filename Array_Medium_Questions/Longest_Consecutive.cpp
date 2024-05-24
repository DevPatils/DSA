#include<iostream>    
#include<vector>
using namespace std;
    int majorityElement(vector<int> nums) {
        int majority = nums.size()/2;
        int maxi = nums[0];
        for (int i = 1;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi = nums[i];
            }
        }
        vector<int>hash(maxi+1,0);
        for(int i =0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        for(int i = 0;i<=maxi;i++){
            if(hash[i]>majority){
                return i;
            }
        }
        return -1;
    }
int main(){
    vector<int> arr= {3,2,3,3};
    // rotate_by1(arr,5);
    int x = majorityElement(arr);
    cout<<(x);
    return 0;
}