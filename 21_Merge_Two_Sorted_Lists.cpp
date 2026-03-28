#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *list;
        ListNode *listtest;
        if (list1 == NULL)
        {
            list = list2;
            return list;
        }
        else if (list2 == NULL)
        {
            list = list1;
            return list;
        }
        if (list1->val <= list2->val)
        {
            list = list1;
            list1 = list1->next;
            listtest = list;
        }
        else
        {
            list = list2;
            list2 = list2->next;
            listtest = list;
        }
        while (list1 != nullptr && list2 != nullptr)
        {
            if (list1->val >= list2->val)
            {
                listtest->next = list2;
                list2 = list2->next;
                listtest = listtest->next;
                continue;
            }
            if (list1->val <= list2->val)
            {
                listtest->next = list1;
                list1 = list1->next;
                listtest = listtest->next;
                continue;
            }
        }
        if (list1 == nullptr)
        {
            listtest->next = list2;
        }
        else
        {
            listtest->next = list1;
        }
        return list;
    }
};

int main()
{

    return 0;
}