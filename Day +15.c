//linked list
//program to create and insert a new node

Node* insert(Node *head,int data)
      {
          //Complete this method 
            
          if (head == NULL) head = new Node(data);
        else {
            Node *curr = head;
            while (curr->next) curr = curr->next;
            curr->next = new Node(data);
        }
        return head;
      }
