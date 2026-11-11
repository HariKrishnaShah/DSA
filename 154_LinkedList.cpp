#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
struct Node *addTolinkedList(Node *head, int data = 1)
{
    struct Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
    {
        return newNode;
    }
    else
    {
        struct Node *lastNode = head;
        while (lastNode->next != NULL)
        {
            lastNode = lastNode->next;
        }
        lastNode->next = newNode;
    }
    return head;
}

struct Node *printList(Node *head)
{
    if (head == NULL)
    {
        cout << "List is Emtpy" << endl;
    }
    else
    {
        struct Node *current = head;
        while (current != NULL)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
    return head;
}
int main()
{
    struct Node *head = NULL;
    int option = -1;
    while (option != 0)
    {
        cout << "\t\tMenu\t\t" << endl;
        cout << "Press 0 to exit. \nPress 1 to print the linked list. \n Press 2 to add to linked list." << endl;
        cout << "Enter an option from below menu screen: ";
        cin >> option;
        switch (option)
        {
        case 0:
            break;
        case 1:
            head = printList(head);
            break;
        case 2:
            head = addTolinkedList(head);
            break;
        }
    }
    cout << "\n\nThank you !" << endl;
    return 0;
}