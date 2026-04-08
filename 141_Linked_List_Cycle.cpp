#include <iostream>
#include <unordered_set>
using namespace std;
// 1

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> mh;

        while(head != NULL){
            if(mh.count(head)){
                return true;
            }

            mh.insert(head);
            head = head->next;
        }
        return false;
    }
};

// 2
class Solution2 {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL){
            return false;
        }

        ListNode* a = head;
        ListNode* b = head;
        while(b->next != NULL && b->next->next != NULL){
            a = a->next;
            b = b->next->next;

            if(b == a){
                return true;
            }
        }
        return false;
    }
};
int main(){

    return 0;
}