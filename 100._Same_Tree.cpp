#include <iostream>
#include <stack>
using namespace std;


 
 struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };


 // duyệt for_oder: node-trái-phải. Dùng stack và lặp để so sánh từng cái
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == nullptr && q == nullptr){
            return true;
        }else if(p == nullptr || q == nullptr){
            return false;
        }
        stack<TreeNode*> stp;
        stack<TreeNode*> stq;
        stp.push(p);
        stq.push(q);
        while(stp.empty() == false && stq.empty() == false){
            TreeNode* a = stp.top();
            TreeNode* b = stq.top();
            stp.pop();
            stq.pop();
            if(a->val != b->val){
                return false;
            }
            if(a->right != nullptr && b->right != nullptr){
                stp.push(a->right);
                stq.push(b->right);
            }else if((a->right == nullptr && b->right != nullptr) || (a->right != nullptr && b->right == nullptr)){
                return false;
            }
            if(a->left != nullptr && b->left != nullptr){
                stp.push(a->left);
                stq.push(b->left);
            }else if((a->left == nullptr && b->left != nullptr) || (a->left != nullptr && b->left == nullptr)){
                return false;
            }
        }
        if(stp.empty() == false || stq.empty() == false){
            return false;
        }
        return true;
    }
};


int main(){

    return 0;
}