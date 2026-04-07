#include <iostream>
using namespace std;

// cach1
class Solution1 {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size()-1;

        while(left < right){
            if(isalnum(s[left]) == false){
                left++;
            }
            else if(isalnum(s[right]) == false){
                right--;
            }
            else if(tolower(s[left]) != tolower(s[right])){
                return false;
            }else{
                left++;
                right--;
            }
        }
        return true;
    }
};
// cach2
class Solution2 {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size()-1;

        while(left < right){
            if(s[left] >= 'A' && s[left] <= 'Z'){
                s[left] = s[left] + 32;
            }
            if(s[right] >= 'A' && s[right] <= 'Z'){
                s[right] = s[right] + 32;
            }
            bool isleft = (s[left] >= 'a' && s[left] <= 'z') || 
                          (s[left] >= 'A' && s[left] <= 'Z') || 
                          (s[left] >= '0' && s[left] <= '9');
         
            if(isleft == false){
                left++;
                continue;
            }
            bool isright = (s[right] >= 'a' && s[right] <= 'z') || 
                          (s[right] >= 'A' && s[right] <= 'Z') || 
                          (s[right] >= '0' && s[right] <= '9');
         
            if(isright == false){
                right--;
                continue;
            }
            if(s[left] == s[right]){
                left++;
                right--;
            }else{
                return false;
            }
        }
        return true;
    }
};
// cach3
class Solution {
public:
    bool isPalindrome(string s) {
        string a = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] = s[i] + 32;
            }
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){
                a += s[i];
            }
        }
        int index = a.size() - 1;
        for(int i = 0; i < a.size()/2; i++){
            if(a[i] == a[index]){
                index--;
                continue;
            }else{
                return false;
            }
        }
        return true;
    }
};
int main(){

    return 0;
}