#include <iostream>
using namespace std;

typedef struct doubly_LL {
    int val;
    struct doubly_LL *next, *prev;
}* DLL;

int menu() {
    int c;
    cout << "1.addNode\n"
         << "2.display\n"
         << "3.deleteLast\n"
         << "4.InsertAt\n"
         << "5.deleteAt\n"
         << "Enter choice: ";
    cin >> c;
    cout << endl;
    return c;
}

void addNode(DLL& head) {
    int value;
    cout << "Enter value: ";
    cin >> value;
    DLL temp = new doubly_LL();
    temp->val = value;
    temp->next = nullptr;
    temp->prev = nullptr;

    if (!head) {  // if List doesnt exists
        head = temp;
        return;
    }

    DLL tail = head;
    while (tail->next) tail = tail->next;
    tail->next = temp;
    temp->prev = tail;
    cout << endl;
}

void display(DLL& head) {
    if (head == nullptr) {
        cout << "List does not exist" << endl;
        return;
    }

    DLL temp = head;
    while (temp) {
        cout << temp->val << " <-> ";
        temp = temp->next;
    }
    cout << "NULL\n" << endl;
}

void deleteLast(DLL& head) {
    if (head == nullptr) {
        cout << "List does not exist" << endl;
        return;
    }

    DLL tail = head;
    while (tail->next) tail = tail->next;

    if (tail != head)
        tail->prev->next = nullptr;
    else  // if length of list if 1
        head = nullptr;
    delete tail;
}

void insertAt(DLL& head) {
    int p;
    cout << "Enter pos: ";
    cin >> p;

    if (p < 1) {  // pos cant be less than 1
        cout << "Position out of bounds!\n" << endl;
        return;
    }

    if (p == 1) {  // if head inserting before head
        int value;
        cout << "Enter value: ";
        cin >> value;

        DLL temp = new doubly_LL();
        temp->val = value;
        temp->next = head;
        temp->prev = nullptr;

        if (head) {  // check if head exists
            head->prev = temp;
        }
        head = temp;
        cout << endl;
        return;
    }
    // if position is greater than 1
    if (head == nullptr) {  // if list doesnt exist
        cout << "List does not exist or position out of bounds!\n" << endl;
        return;
    }

    DLL tail = head;
    int currentPos = 1;

    while (tail != nullptr && currentPos < p) {
        tail = tail->next;
        currentPos++;
    }

    if (tail == nullptr) {  // if position is greater than lengthof list
        cout << "Position out of bounds!\n" << endl;
        return;
    }

    int value;
    cout << "Enter value: ";
    cin >> value;

    DLL temp = new doubly_LL();
    temp->val = value;

    temp->next = tail;
    temp->prev = tail->prev;
    if (tail->prev) {
        tail->prev->next = temp;
    }
    tail->prev = temp;
    cout << endl;
}

void deleteAt(DLL& head) {
    if (head == nullptr) {
        cout << "List does not exist\n" << endl;
        return;
    }

    int p;
    cout << "Enter pos: ";
    cin >> p;

    if (p < 1) {
        cout << "Position out of bounds!\n" << endl;
        return;
    }

    DLL tail = head;
    int currentPos = 1;

    while (tail != nullptr && currentPos < p) {
        tail = tail->next;
        currentPos++;
    }

    if (tail == nullptr) { //if position is greater than length of list
        cout << "Position out of bounds!\n" << endl;
        return;
    }

    if (tail == head) { //if position is node
        head = tail->next;
        if (head) {
            head->prev = nullptr;
        }
    } else {
        if (tail->next) {
            tail->next->prev = tail->prev;
        }
        if (tail->prev) {
            tail->prev->next = tail->next;
        }
    }

    delete tail;
    cout << "Node at position " << p << " deleted.\n" << endl;
}

int main() {
    DLL head = nullptr;
    while (1) {
        int choice = menu();
        switch (choice) {
            case 1:
                addNode(head);
                break;
            case 2:
                display(head);
                break;
            case 3:
                deleteLast(head);
                break;
            case 4:
                insertAt(head);
                break;
            case 5:
                deleteAt(head);
                break;
        }
    }
    return 0;
}
