#include <iostream>
using namespace std;
    int searchInsert(int nums[], int target) {
        bool found = 0;
        int size;
        cin>>size;
        for(int i = 0; i<size;i++){
            if(nums[i]==target){
                cout<< i;
                found = 1;
                return 1;
                
            }
            else{
                found = 0;
            }
            if (found ==0){
                int start = 0;
                int end = 1;
                while(end<=size){
                    if((target>nums[start]) && (target <nums[end]) ){
                        int insert =  start+1;
                        cout<<insert;
                        return insert;
                    }
                    
                        start++;
                        end++;
                    
                }
            }
        }
        
  
    }

    int main(){
        int arr[] = {1,2,5,4,7};
        searchInsert(arr,3);
    }
