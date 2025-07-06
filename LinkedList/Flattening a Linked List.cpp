/* Node structure  used in the program

struct Node{
    int data;
    struct Node * next;
    struct Node * bottom;

    Node(int x){
        data = x;
        next = NULL;
        bottom = NULL;
    }

};
*/

class Solution {
  public:
  
    Node *mergeLL(Node *h1, Node *h2)
    {
        Node *newNode = new Node(0);
        Node *tail = newNode;
        
        while(h1 != NULL && h2 != NULL)
        {
            if(h1->data <= h2->data)
            {
                tail->bottom = h1;
                tail = tail->bottom;
                h1 = h1->bottom;
                tail->bottom = NULL;
            }
            else
            {
                tail->bottom = h2;
                tail = tail->bottom;
                h2 = h2->bottom;
                tail->bottom = NULL;
            }
        }
        
        if(h1 != NULL)
        {
            tail->bottom = h1;
        }
        else
        {
            tail->bottom = h2;
        }
        
        return newNode->bottom;
    }
    // Function which returns the  root of the flattened linked list.
    Node *flatten(Node *root) {
        // Your code here
        Node *h1 , *h2 , *h3;
        
        while(root->next)
        {
            h1 = root;
            h2 = root->next;
            h3 = root->next->next;
            
            h1->next = NULL;
            h2->next = NULL;
            
            root = mergeLL(h1,h2);
            root->next = h3;
        }
        return root;
    }
};
