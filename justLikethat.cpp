#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;


//   Definition for singly-linked list.
    struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
       int c = 0;
       int sum = 0;
       ListNode preHead(0),*p=&preHead;
    //    c = sum%10;
       ListNode* t1 = l1;
       ListNode* t2 = l2;
       
       ListNode* t3;

       while(t1 || t2 || c)
       {
           sum = (t1?t1->val:0) + (t2?t2->val:0) + (c?c:0);
           c  = sum/10;
           p->next = new ListNode(sum%10);
           p = p->next;
           t1 = t1?t1->next:t1;
           t2 = t2?t2->next:t2;

        }
       return preHead.next;
       
    }
    void insertNode(ListNode*header,int num)
    {
        ListNode* temp = header;
        while(temp->next)
        {
            temp = temp->next;
        }
        temp->next = new ListNode(num);
    }
};
int main() {
    
    ListNode*h1 = new ListNode(2);
    ListNode*h2 = new ListNode(5);

    // ll 1
    Solution s;
    s.insertNode(h1,4);
    s.insertNode(h1,3);
    s.insertNode(h2,6);
    s.insertNode(h2,4);

    // ListNode*temp = h1;
    // while(temp)
    // {
    //     cout<<temp->val<<"->";
    //     temp=temp->next;
    // }
    ListNode*newHeader = s.addTwoNumbers(h1,h2);
    ListNode*temp = newHeader;
    while(temp)
    {
        cout<<temp->val<<"->";
        temp=temp->next;
    }



    
    return 0;
}