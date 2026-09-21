#include <bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node* next;
};

struct LinkedList {
    Node* head;
    Node* tail;
};
int main() {
    int a, b;
    cin >>a >>b;
    cout << a+b;
    return 0;
}