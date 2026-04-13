#include <iostream>
#include <vector>
using namespace std;

int hammingWeight(int n) {
        vector<int> bit;
        do{
            bit.push_back(n%2);
            n = n/2;
        }while(n > 0);
        int dem = 0;
        for(int i =0; i < bit.size();i++){
            if(bit[i] == 1){
                dem++;
            }
        }
        return dem;

    }

int main(){

    return 0;
}