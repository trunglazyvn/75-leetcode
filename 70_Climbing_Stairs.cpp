#include <iostream>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if(n == 1 || n == 2){
            return n;
        }
        int kq[n];
        kq[0] = 1;
        kq[1] = 2;
        for(int i = 2; i < n; i++){
            kq[i] = kq[i-1] + kq[i-2];
        }
        return kq[n-1];
    }
};

int main(){

    return 0;
}