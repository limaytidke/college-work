#include <iostream>
using namespace std;

typedef struct Linked {
    int data;
    struct Linked* next;
}* sll;

sll getnode() {
    sll new1 = new Linked;
    cout << "Enter data: ";
    cin >> new1->data;
    new1->next = nullptr;
    return new1;
}

void display(sll head) {
    sll temp = head;
    while (temp) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "nullptr";
}

int addAll(sll head){
    sll temp = head;
    int sum = 0;
    while (temp) {
        sum += temp->data;
        temp = temp->next;
    }
    return sum;
}

int main() {
    sll head = nullptr, temp, new1;
    char res;
    do {
        if (!head) {
            head = getnode();
            temp = head;
        } else {
            new1 = getnode();
            temp->next = new1;
            temp = temp->next;
        }
        cout << "Continue?: ";
        cin >> res;
    } while (res == 'y');
    display(head);
    cout << "\n" << addAll(head);
    return 0;
}
