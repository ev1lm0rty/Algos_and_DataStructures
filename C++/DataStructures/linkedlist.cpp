/* Linked List Implementation in C++ */
#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next = NULL;
};

class List : public Node{

    private:
        Node *head;
        int size = 0;

    
    public:

        // Constructor
        List(){
            head = NULL;
        }

        // Add a node
        void addNode(int value){
            Node *newNode = new Node();
            Node *tempNode = new Node();
            newNode->data = value;

            if(head == NULL){
                head = newNode;
            }
            else{
                tempNode = head;
                while(tempNode->next != NULL){
                    tempNode = tempNode->next;
                }
                tempNode->next = newNode;
            }
            size++;
        }

        // Print the list
        void printList(){
            Node *tempNode;
            tempNode = head;
            while(tempNode->next != NULL){
                cout << tempNode->data << "--->";
                tempNode = tempNode->next;
            }
            cout << tempNode->data;
        }

        // Remove from last
        void remLast(){
            Node *temp;
            temp = head;

            while(temp->next != NULL){
                temp = temp->next;
            }
            free(temp);
            size--;
        }

        // Remove node from a given position
};

int main(){
    List *l1 = new List();
    l1->addNode(10);
    l1->addNode(20);
    l1->addNode(30);
    l1->printList();
    l1->remLast();
    cout << "----" << endl;
    l1->printList();
}

