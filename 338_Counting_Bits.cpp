#include <iostream>
#include <vector>
using namespace std;

vector<int> countBits1(int n) {
        vector<int> ans(n + 1, 0);
        for(int i = 1; i <= n; i++){
            ans[i] = ans[i / 2] + (i % 2);
        }
        return ans;
    }

vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0; i <= n; i++){
            int a = i;
            int tong = 0;
            while(a > 0){
                tong += (a % 2);
                a = a / 2;
                
            }
            ans.push_back(tong);
        }
        return ans;
    }

int main(){
    return 0;
}