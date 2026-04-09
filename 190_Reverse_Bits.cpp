#include <iostream>

using namespace std;
class Solution {
public:
    int reverseBits(int n) {
        int bitrever = 0;
        for(int i =0 ; i < 32; i++){
            int bit = n & 1;

            bitrever = (bitrever << 1) | bit;

            n = n >> 1;
        }
        return bitrever;
    }
};
int main(){
    int n;
    cin >> n;
    Solution z;
    int a = z.reverseBits(n);
    cout << a;
    return 0;
}