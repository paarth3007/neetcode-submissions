/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
ListNode*collision(ListNode*x,ListNode*y,int d){
    while(d){
        d--;
        x=x->next;
    }
    while(y!=x){
        y=y->next;
        x=x->next;

    }
    return x;
}
   


    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL||headB==NULL){
            return NULL;
        }
       ListNode*t1=headA;
       ListNode*t2=headB;
       int n1=0;
       int n2=0;
       while(t1!=NULL){
        t1=t1->next;
        n1++;

       }
       while(t2!=NULL){
        t2=t2->next;
        n2++;
       }
       if(n1>n2){
        return collision(headA,headB,n1-n2);
       }
       else{
        return collision(headB,headA,n2-n1);
       }
        
    }
};