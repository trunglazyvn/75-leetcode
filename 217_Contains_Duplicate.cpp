#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> myset;

        for(int i = 0; i < n; i++){
            if(myset.count(nums[i]) > 0){
                return true;
            }
            myset.insert(nums[i]);
        }
        return false;
    }
int main(){

    return 0;
}