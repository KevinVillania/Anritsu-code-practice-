#include <iostream>
using namespace std;

class List{

    private:
        typedef struct node{

            int data;
            node* next;

        }*nodePtr;

        node* head;
        node* curr;
        node* temp;

    public:
        List();
        void CreateNode(int addData);
        void DeleteNode(int deleteData);
        void PrintList();

};

List::List(): head(nullptr), curr(nullptr), temp(nullptr){

    //ctor
}

//Create new node
void List::CreateNode(int addData){

    nodePtr n1 = new node();

    n1->data = addData;
    n1->next = nullptr;

    if(head != nullptr){

        curr = head;

        while(curr->next != nullptr){

            curr = curr->next;
        }

        curr->next = n1;

    }else{

        head = n1;
    }
}

void List::DeleteNode(int deleteData){

    nodePtr delPtr = NULL;

    curr = head;
    temp = head;

    while(curr->next != nullptr && curr->data != deleteData){

        temp = curr;
        curr = curr->next;
    }

    if(curr == nullptr){

        cout << deleteData << " is not in the list!\n";
    }else if(curr == head){

        head = head->next;
    }else{

        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
    }

    delete delPtr;
}


void List::PrintList(){

    if(head != nullptr){

        curr = head;

        while(curr != nullptr){

            cout << curr->data << " " << curr << endl;
            curr = curr->next;
        }

    }else{

        cout << "Linked List is empty!\n";

    }
}

int main(){

    List LL;

    LL.CreateNode(25);
    LL.CreateNode(145);
    LL.CreateNode(11);

    LL.PrintList();

    cout << endl;

    LL.DeleteNode(11);
    LL.PrintList();

}
