/* Implementatnion of Binary Search Tree in C++ */

#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* left; 
        Node* right;

        Node(int value){
            this->data = value;
            this->left = NULL;
            this->right = NULL;
        }

        Node(){
            this->left = NULL;
            this->right = NULL;
        }
        
};

class BST : public Node{

    private:
        Node *root = NULL;
        
        void print(Node *temp){
            if(temp->left != NULL){
                print(temp->left);
            }
            cout << temp->data << "-->";
            if(temp->right != NULL){
                print(temp->right);
            }
        }

        void set(Node *temp, int value){
            if(value < temp->data){
                if(temp->left == NULL){
                    temp->left = new Node(value);
                }
                else if(temp->left != NULL){
                    set(temp->left , value);
                }
            }
            else if(value > temp->data){
                if(temp->right == NULL){
                    temp->right = new Node(value);
                }
                else if(temp->right!= NULL){
                    set(temp->right , value);
                }

            }
            else{
                return;
            }
    }
    
    public:
        void addNode(int value){
            Node *newNode = new Node(value);
            Node *temp;

            if(root == NULL){
                root = newNode;
                
            }
            else{
                temp = root;
                set(temp , value);
            }
        }
        void printAll(){
            Node *temp;
            temp = root;

            print(temp);
        }

       
};

int main(){
    BST *b = new BST();
    b->addNode(40);
    b->addNode(20);
    b->addNode(10);
    b->addNode(30);
    b->addNode(1);

    b->printAll();
    return 0;
}