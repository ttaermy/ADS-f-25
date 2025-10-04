                        /*Stack*/
/*
#include <iostream>
#include <stack>
using namespace std;

void printout (stack<int>Stack) {
    while (!Stack.empty()) {
        cout << Stack.top() << endl;
        Stack.pop();
    } 
}

int main () {

  stack<int>hj;
  hj.push(1);
  hj.push(10);
  hj.push(34);

  printout(hj);

    return 0;
}*/

                         /*Linked list*/

// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int Value;
//     Node* Next;
// };

// void printlist(Node*n) {
//     while (n != NULL) {
//         cout << n->Value << endl;
//         n = n->Next;
//     }
// };

// // void Insertfront(Node**head, int newValue) {
// //     Node* newNode = new Node();
// //     newNode->Value = newValue;
// //     newNode->Next = *head;
// //     *head = newNode;
// // };

// // void Insertback(Node**head, int newValue) {
// //     Node* newNode = new Node();
// //     newNode->Value = newValue;
// //     newNode->Next = NULL;
// //     if (*head == NULL) {
// //         *head = newNode;
// //         return;
// //     };
// //     Node* last = *head;
// //     while (last->Next != NULL){
// //         last = last->Next;
// //     };
// //     last->Next = newNode;
// // };

// void Insertafter(Node*previous, int newValue){
//     if (previous == NULL) {
//         cout << "previous can not be NULL";
//         return;
//     }
//     Node* newNode = new Node();
//     newNode->Value = newValue;
//     newNode->Next = previous->Next;
//     previous->Next = newNode;
// };

// int main () {

//     Node* head = new Node();
//     Node* second = new Node();
//     Node* third = new Node();

//     head->Value = 1;
//     head->Next = second;
//     second->Value = 2;
//     second->Next = third;
//     third->Value = 3;
//     third->Next = NULL;

//     Insertafter(head, -1);
//     // Insertback(&head, 4);
//     // Insertfront(&head, -1);
//     printlist(head);

//     return 0;
// }

           /*QUEUE*/
#include <iostream>
#include <queue>
using namespace std;

void printout(queue<int>queue) {
    while (!queue.empty()) {
        cout << queue.front() << " ";
        queue.pop();
    }
    cout << endl;
};

int main () {

    queue<int> Myqueue;
    Myqueue.push(1);
    Myqueue.push(2);
    Myqueue.push(3);

    cout << "The size: " << Myqueue.size() << endl;
    cout << "The first element: " << Myqueue.front() << endl;
    cout << "The last element: " << Myqueue.back() << endl;



    return 0;
}