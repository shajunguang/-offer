//快慢指针
```c
/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* FindKthToTail(ListNode* head, unsigned int k) {
        auto slow=head;
        auto fast=head;
        k--;
        while(k-- && fast!=NULL) fast=fast->next;
        if(fast==NULL) return fast;
        while(fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
};
```
