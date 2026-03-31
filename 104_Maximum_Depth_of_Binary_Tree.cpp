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
 
class Solution {
public:
    int maxDepth(TreeNode* root) {
        TreeNode* a = root;
        int index = 0;
        if(root == nullptr){
            return index;
        }else{
            index = 1;
        }
        stack<TreeNode*> st;
        stack<int> index_max;
        index_max.push(1);
        st.push(a);
        while(st.empty() == false){
            a = st.top();
            st.pop();
            int max = index_max.top();
            index_max.pop();
            if(max > index){
                index = max;
            }
            if(a->right != nullptr){
                st.push(a->right);
                index_max.push(max + 1);
            }
            if(a->left != nullptr){
                st.push(a->left);
                index_max.push(max + 1);
            }
        }
        return index;
    }
};

int main(){

    return 0;
}