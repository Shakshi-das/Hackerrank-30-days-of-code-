//Binary search trees
#include <iostream>
#include <cstddef>
using namespace std;

class Node{
   public:

     int data;
     Node *left; Node *right;

     Node(int d) {
        data = d;
        left = NULL; right = NULL;
    }
};

class Solution{
   public:

     Node* insert (Node* root,int data) 
    {
           if(root==NULL){
             return new Node (data);
           }
          else {
             Node* cur; 
             if(data <=root->data) {
                 cur insert (root->left, data);
                 root->left= cur;
             }
           return root;
          }
     }

int getHeight(Node* root){
          //Write your code here
          return root == NULL ? -1 : 1 + max(getHeight(root->left),                getHeight(root->right));
}
