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
    cout << endl;
    while (temp) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
    ;
}

int addAll(sll head) {
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
    int res, size;
    cout << "1.Insert at end\n2.insert at "
            "pos\n3.Delete\n4.display\n5.middle\n6.addAll"
            "element\n7.reverse\nEnter Choice: ";
    cin >> res;

    do {
        switch (res) {
            case 1:
                if (!head) {
                    head = getnode();
                    temp = head;
                } else {
                    new1 = getnode();
                    temp->next = new1;
                    temp = temp->next;
                }
                break;

            case 2:
                int pos;
                sll temp2;
                temp2 = head;
                cout << "enter position(index starts from 0): ";
                cin >> pos;
                if (pos == 0) {
                    new1 = getnode();
                    new1->next = head;
                    head = new1;
                } else {
                    while (pos > 1) {
                        pos--;
                        temp2 = temp2->next;
                    }
                    new1 = getnode();
                    new1->next = temp2->next;
                    temp2->next = new1;
                }
                break;

            case 4:
                display(head);
                break;
            default:
                break;
        }
        cout << "\n1.Insert at end\n2.insert at "
                "pos\n3.Delete\n4.display\n5.middle "
                "element\n6.addAll\n7.reverse\nEnter Choice: ";
        cin >> res;
    } while (res != 0);
    return 0;
}
