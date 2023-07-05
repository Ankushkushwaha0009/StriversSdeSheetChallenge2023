/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/
Node *findMiddle(Node *head) {
    if(head -> next == NULL) return head  ; 
    Node *p = head; 
    int c = 0 ;
    while(p != NULL) {
          p = p -> next ; 
          c++ ; 
    }
    p = head ; 
    c = c/2 ; 
    int m = 0  ;
    while( p  !=  NULL) {
       m++ ; 
       p = p -> next ;
       if(m == c){
           return p ; 
       }
    }
    return NULL ;
}














