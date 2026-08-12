#include <iostream>
using namespace std;

class LinkedList {
   public:
    int val;
    LinkedList* next = nullptr;

    LinkedList* addNodeAtEnd() {
        LinkedList* temp = new LinkedList;
        int v;
        cout << "Enter value: ";
        cin >> v;
        cout << endl;
        temp->val = v;
        return temp;
    }

    LinkedList* addNodeAtPos(int pos) {
        LinkedList* temp = new LinkedList;
        temp = temp->addNodeAtEnd();
        LinkedList* head = this;

        if (pos == 1) {
            temp->next = head;
            return temp;
        } else {
            while (pos - 1 > 1) {
                head = head->next;
                pos--;
            }

            temp->next = head->next;
            head->next = temp;
            return this;
        }
    }

    LinkedList* deleteNodeAtEnd() {
        LinkedList* temp;
        LinkedList* delNode;

        temp = this;

        if (!temp->next) {
            delete temp;
            return nullptr;
        }

        else {
            while (temp->next->next) temp = temp->next;

            delNode = temp->next;
            temp->next = nullptr;
            delete delNode;
            return this;
        }
    }

    LinkedList* deleteNodeAtPos(int pos) {
        LinkedList* temp;
        LinkedList* head = this;

        if (pos == 1) {
            temp = head->next;
            delete head;
            return temp;
        } else {
            while (pos - 1 > 1) {
                head = head->next;
                pos--;
            }

            temp = head->next;
            head->next = temp->next;
            delete temp;
            return this;
        }
    }

    void display() {
        LinkedList* head = this;
        cout << endl;
        while (head) {
            cout << head->val << "->";
            head = head->next;
        }
        cout << "NULL\n" << endl;
    }
};

int main() {
    LinkedList* head = nullptr;
    LinkedList* temp = nullptr;
    int res;
    do {
        cout << "1.Insert node at the end\n2.Insert node at a "
                "position\n3.Delete node from the end\n4.Delete node from a "
                "position\n5.Display LinkedList"
             << endl;
        cout << "\nEnter choice(0 for exit): ";
        cin >> res;
        switch (res) {
            case 1:
                if (!head) {
                    head = head->addNodeAtEnd();
                    temp = head;
                } else {
                    temp->next = temp->addNodeAtEnd();
                    temp = temp->next;
                }
                break;

            case 2:
                if (head) {
                    int pos;
                    cout << "Enter pos: ";
                    cin >> pos;
                    head = head->addNodeAtPos(pos);
                } else {
                    cout << "Linked List does not exist" << endl;
                }
                break;

            case 3:
                if (head)
                    head = head->deleteNodeAtEnd();
                else
                    cout << "Linked List does not exist" << endl;
                break;

            case 4:
                if (head) {
                    int pos;
                    cout << "Enter pos: ";
                    cin >> pos;
                    head = head->deleteNodeAtPos(pos);
                } else {
                    cout << "Linked List does not exist" << endl;
                }
                break;

            case 5:
                if (head)
                    head->display();
                else
                    cout << "List does not exist" << endl;
                break;
        }
    } while (res != 0);
    head->display();
    return 0;
}
