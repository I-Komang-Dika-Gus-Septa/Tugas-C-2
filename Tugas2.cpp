#include <iostream>
using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// Node* top = NULL;

// void push(int value){
//     Node* baru = new Node();
//     baru->data = value;
//     baru->next = top;
//     top = baru;
// }

// void pop(){
//     if(top == NULL){
//         cout << "Stack kosong\n";
//     } else {
//         Node* hapus = top;
//         top = top->next;
//         delete hapus;
//     }
// }

// void display(){
//     Node* temp = top;
//     while(temp != NULL){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main(){
//     push(10);
//     push(20);
//     push(30);

//     display();

//     pop();
//     display();

//     return 0;
// }


// struct Node {
//     int data;
//     Node* next;
// };

// Node *front = NULL;
// Node *rear = NULL;

// void enqueue(int value){
//     Node* baru = new Node();
//     baru->data = value;
//     baru->next = NULL;

//     if(front == NULL){
//         front = rear = baru;
//     } else {
//          rear->next = baru;
//         rear = baru;
//     }
// }

// void dequeue(){
//     if(front == NULL){
//         cout << "Queue kosong\n";
//     } else {
//         Node* hapus = front;
//         front = front->next;
//         delete hapus;
//     }
// }

// void display(){
//     Node* temp = front;
//     while(temp != NULL){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main(){
//     enqueue(10);
//     enqueue(20);
//     enqueue(30);

//     display();

//     dequeue();
//     display();

//     return 0;
// }


// int fibonacci(int n){
//     if(n == 0)
//         return 0;
//     else if(n == 1)
//         return 1;
//     else
//         return fibonacci(n-1) + fibonacci(n-2);
// }

// int main(){
//     int n;

//     cout << "Masukkan jumlah deret: ";
//     cin >> n;

//     for(int i = 0; i < n; i++){
//         cout << fibonacci(i) << " ";
//     }

//     return 0;
// }