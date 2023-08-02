//Level order traversal of BST 

void levelOrder(Node * root){
      //Write your code here
  	queue<Node *> q;
        q.push(root);

        while (q.size() != 0) {
            Node *curr = q.front();
            q.pop();

            cout << curr->data << " ";

            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
        }
}
