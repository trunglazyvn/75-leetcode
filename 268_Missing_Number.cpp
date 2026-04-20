#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int missingNumber2(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        if(nums[nums.size() - 1] != nums.size()){
            return nums.size();
        }
        for(int i = 0; i < nums.size() - 1; i++){
            
            if(nums[i] + 1 != nums[i+1]){
                return nums[i] + 1;
            }else{
                continue;
            }

        }
        return NULL;
    }


int missingNumber1(vector<int>& nums) {
        unordered_set<int> mybook;
        int n =nums.size();
        for(int i =0; i <= n;i++){
            mybook.insert(i);
        }

        for(int i = 0; i < n; i++){
            if(mybook.count(nums[i])){
                mybook.erase(nums[i]);
                continue;
            }
        }

        for(int i = 0; i<=n; i++){
            if(mybook.count(i)){
                return i;
            }
        }
        return NULL;
    }
int main(){
    return 0;
}