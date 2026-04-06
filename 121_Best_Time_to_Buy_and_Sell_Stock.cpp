#include <iostream>
#include <vector>
using namespace std;

int main(){

    class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy = INT_MAX;
        int sell = 0;
        int ln = 0;
        
        for(int i = 0; i < n ; i++){
            if(prices[i] < buy){
                buy = prices[i];
                continue;
            }
            if(prices[i] - buy > ln){
                ln = prices[i] - buy;
            }
            
        }
        return ln;
    }
};
    return 0;
}