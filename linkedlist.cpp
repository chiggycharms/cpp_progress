#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertionAtHead(Node *&head, int val)
{
    // head is passed by reference so we can modify the caller's pointer
    if (head == nullptr)
    {
        // assign directly to the reference, don't shadow with a new local variable
        head = new Node(val);
    }
    else
    {
        Node *temp = new Node(val);
        temp->next = head;
        head = temp;
    }
    // printing the list is the caller's responsibility; if you want to
    // trace operations you can call printNodes(head) from main instead.
}
void insertionInBetween(Node *&head, int val, int pos)
{
    // inserting at position `pos` (1-based). if pos <=1 or list empty,
    // just prepend because there's nowhere else to go.
    if (pos <= 1 || head == nullptr)
    {
        insertionAtHead(head, val);
        return;
    }

    // walk to node at position pos-1 (or last node if pos is beyond length)
    Node *prev = head;
    int idx = 1;
    while (idx < pos - 1 && prev->next != nullptr)
    {
        prev = prev->next;
        ++idx;
    }

    // insert after `prev`
    Node *temp = new Node(val);
    temp->next = prev->next;
    prev->next = temp;
}
void insertionAtEnd(Node *&head, int val)
{
    if (head == nullptr)
    {
        head = new Node(val);
        return;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = new Node(val);
}
void printNodes(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<< endl;
}

int main()
{
    int x;
    
    Node *head = NULL;
    string cont;
    do
    {
        cout << "enter 1 insertion at begining\n";
        cout << "enter 2 insertion in between\n";
        cout << "enter 3 insertion at end\n";
        cin >> x;
        if (x == 1)
        {
            int val, n;
            cout << "enter the number of times to be inserted\t";
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                cout << "enter the value to be inserted\t";
                cin >> val;
                insertionAtHead(head, val);
            }
            printNodes(head);
        }
        else if (x == 2)
        {
            int val, pos;
            cout << "enter the value to be inserted\t";
            cin >> val;
            cout << "enter the position to be inserted in\t";
            cin >> pos;
            insertionInBetween(head, val, pos);
            printNodes(head);
        }
        else if (x == 3)
        {
            int val;
            cout << "enter the value to be inserted\t";
            cin >> val;
            insertionAtEnd(head, val);
            printNodes(head);
        }
        cout << "do you want to continue\t";
        cin >> cont;
    } while (cont == "yes");
}