#include<bits/stdc++.h>
using namespace std;
struct Node{
int data;
Node* next;
};
 Node* root = nullptr;
 void add_note(int data)
 {
     Node* new_node = new Node();
     new_node -> data = data;
     new_node -> next = nullptr;
     if( root== nullptr)
        root = new_node;
     else{
        Node* current_node =root;
        while(current_node -> next!= nullptr){
            current_node= current_node -> next;

        }
        current_node-> next = new_node;
     }
     cout << new_node -> data<< " ";
 }

 int main()
 {
     int arr[] = {1, 2 , 3, 4, 5};
     int n=5;
     for (int i=0; i<n; i++)
     add_note(arr[i]);
return 0;
 }
