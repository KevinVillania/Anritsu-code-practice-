#include <iostream>
using namespace std;

class BST{

    private:
        struct node{

            int key;
            node* left;
            node* right;

        };

        node* root;

        void AddLeafPrivate(int key, node* Ptr);
        void PrintTreePrivate(node* Ptr);
        node* ReturnNodePrivate(int key, node* Ptr);

    public:
        BST();
        node* CreateLeaf(int key);
        void AddLeaf(int key);
        void PrintTree();
        node* ReturnNode(int key);


};

BST::BST(): root(nullptr){

    //ctor
}

//create a new node
BST::node* BST::CreateLeaf(int key){

    node* n1 = new node();

    n1->key = key;
    n1->left = nullptr;
    n1->right = nullptr;

    return n1;
}

void BST::AddLeaf(int key){

    AddLeafPrivate(key, root);
}

void BST::AddLeafPrivate(int key, node* Ptr){

    if(root == nullptr){

        root = CreateLeaf(key);

    }else if(key > Ptr->key){

        if(Ptr->right != nullptr){

            AddLeafPrivate(key, Ptr->right);
        }else{

            Ptr->right = CreateLeaf(key);
        }
    }else if(key < Ptr->key){

        if(Ptr->left != nullptr){

            AddLeafPrivate(key, Ptr->left);
        }else{

            Ptr->left = CreateLeaf(key);
        }
    }else{

        cout << key << " already exists in tree\n";
    }
}

void BST::PrintTree(){

    PrintTreePrivate(root);
}


void BST::PrintTreePrivate(node* Ptr){

    if(root != nullptr){

        if(Ptr->left != nullptr){

            PrintTreePrivate(Ptr->left);
        }

        cout << Ptr->key << " ";

        if(Ptr->right != nullptr){

            PrintTreePrivate(Ptr->right);
        }

    }else{

        cout << "Tree is empty\n";
    }
}

BST::node* BST::ReturnNode(int key){

    ReturnNodePrivate(int key, root);
}

BST::node* BST::ReturnNodePrivate(int key, node* Ptr){

    if(Ptr != nullptr){

            if(key == Ptr->key){

                return Ptr;
            }else{

                if(key > Ptr->key){

                    return ReturnNodePrivate(key, Ptr->right);
                }
                if(key < Ptr->key){

                    return ReturnNodePrivate(key, Ptr->left);
                }



            }

    }else{

        cout << "Tree is empty"
        return nullptr;

    }
}
