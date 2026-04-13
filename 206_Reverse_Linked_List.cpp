#include <iostream>
#include <stack>
using namespace std;


  
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        stack<ListNode*> list;
        ListNode* kq = head;
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        while(kq != nullptr){
            list.push(kq);
            kq = kq->next;
        }

        ListNode* newhead = list.top();
        list.pop();

        kq = newhead;

        while(!list.empty()){
            kq->next = list.top();
            list.pop();
            kq = kq->next;
        }
        kq->next = nullptr;

        return newhead;
    }
};

int main(){

    return 0;
}