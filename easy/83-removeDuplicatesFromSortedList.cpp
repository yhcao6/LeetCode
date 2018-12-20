#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        if (head == NULL)
            return NULL;
        ListNode *last = head;
        ListNode *current = head->next;
        while (current != NULL){
            if (last->val != current->val){
                last->next = current;
                last = current;
            }
            current = current->next;
        }
        last->next = NULL;
        return head;
    }
};


int main() {
    ListNode n0 = ListNode(1);
    ListNode n1 = ListNode(1);
    ListNode n2 = ListNode(2);
    ListNode n3 = ListNode(3);
    ListNode n4 = ListNode(3);
    n0.next = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    ListNode *v = Solution().deleteDuplicates(&n0);
    while (v != NULL){
        cout << v->val << "->";
        v = v->next;
    }
    cout << "null" << endl;
}