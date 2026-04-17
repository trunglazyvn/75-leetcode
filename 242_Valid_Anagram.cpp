#include <iostream>
#include <unordered_map>
using namespace std;

bool isAnagram2(string s, string t) {
        if (s.size() != t.size()) return false;
        
        // Mảng 26 phần tử (đại diện cho 'a' đến 'z'), khởi tạo bằng 0
        int dem[26] = {0};
        
        for (int i = 0; i < s.size(); i++) {
            // Lấy ký tự trừ đi 'a' để ép thành chỉ số từ 0 đến 25
            // Ví dụ: 'a' - 'a' = 0, 'b' - 'a' = 1, 'z' - 'a' = 25
            dem[s[i] - 'a']++; 
            dem[t[i] - 'a']--; 
        }
        
        // Kiểm tra xem có phần tử nào bị chênh lệch (khác 0) không
        for (int i = 0; i < 26; i++) {
            if (dem[i] != 0) {
                return false;
            }
        }
        
        return true;
    }

bool isAnagram(string s, string t) {
        unordered_map<char, int> mybook;
        if(s.size() != t.size()) return false;
        for(int i = 0; i < s.size(); i++){
            if(mybook.count(s[i]) > 0){
                mybook.at(s[i])++;
            }else{
                mybook.insert({s[i], 1});
            }
        }
        for(int i =0 ; i < t.size(); i++){
            if(mybook.count(t[i]) > 0){
                mybook.at(t[i])--;
            }else{
                return false;
            }
        }
        for(int i = 0; i < t.size(); i++){
            if(mybook.at(t[i]) == 0){
                continue;
            }else{
                return false;
            }
        }
        return true;
    };   




int main(){

    return 0;
}