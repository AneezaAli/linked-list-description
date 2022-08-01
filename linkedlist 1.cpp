#include<iostream>
using namespace std;

int main()
{

  #include <iostream>
using namespace std;

class Node{
    private:
         int data;
         Node* next;
    public:
    Node(){
        data = 0;
        next = NULL;
    }
    Node(int data ){
        setData(data);
       next = NULL;
    }
    void setData(int data){
        this -> data = data;
    }
    void setNext(Node* next){
        this -> next = next;
    }
    int getData(){
        return data;
    }
    Node* getNext(){
        return next;
    }
};

class LinkedList{
    private:
    Node *head;
    public:
    LinkedList(){
        head = NULL;
    }
    bool isEmpty(){
        
      return (head==NULL);
         if(head == NULL){
            return true;
         }
        else{
           return false;
         }
    }
    void insertAtBegin(int val){
         if(isEmpty()){
            head = new Node(val);
         }
         else{
        
            Node* t = new Node(val);
            t->setNext(head);
            head = t;
       }
    }
     void getFirstElement()
	{
    	cout << "\nFirst Element is: "<< head -> getData();
	}
	
	void getLastElement()
	{
		if(head != NULL){
			while(head -> getNext() != NULL){
				head = head -> getNext();
			}
		}
		cout << head -> getNext();
	}
    int getLength(){
        int count = 0;
        if(! isEmpty()){
            Node* temp = head;
            while(temp != NULL){
                temp = temp -> getNext();
                count++;
            }
        }
        return count;
    }
    void print(){
        if(!isEmpty()){
            Node* temp = head;
            while(temp != NULL){
                cout << temp -> getData() << ' ';
                temp = temp -> getNext();
            }
        }
    }
    void removeFromLast()
	{
		Node* t1 = head;
		Node* t2 = head -> getNext();
		while(t2 -> getNext() != NULL){
			t1 = t1 -> getNext();
			t2 = t2 -> getNext();
			delete t2;
		}
		t1 -> setNext(NULL);
	}

};
int main() {
    LinkedList L1;
    L1.insertAtBegin(12);
    L1.insertAtBegin(30);
    L1.insertAtBegin(84);
    L1.insertAtBegin(50);
    cout<<L1.getLength()<< endl;
     L1.getFirstElement();
    cout << "\nLast Element:";
    //L1.removeFromLast();
	L1.getLastElement();
    L1.print();
}
}