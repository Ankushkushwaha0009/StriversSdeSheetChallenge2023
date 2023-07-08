#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

bool isPalindrome(LinkedListNode<int> *head) {
    LinkedListNode<int> *p = head ; 
    LinkedListNode<int> *q = head ; 
    stack < int >  st ; 
    while(p !=  NULL) {
        st.push(p->data) ; 
        p = p-> next ; 
    } 
    while(q!= NULL and !st.empty()) {
        int top = st.top() ; 
        st.pop() ; 
        if(top != q -> data) return false ; 
        q = q -> next ; 
    }
    return true ; 
}


















