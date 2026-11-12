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

struct Node *lengthOfLinkedList(Node *head)
{
    int count = 0;
    struct Node *current = head;

    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    cout << "The length of the list is: " << count << endl;
    return head;
}

struct Node *insertAtHead(Node *head)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = 1;
    newNode->next = head;
    return newNode;
}

struct Node *insertAtKthPosition(Node *head, int position)
{
    if (position < 0)
    {
        cout << "Invalid position";
        return head;
    }
    if (position == 0)
    {
        return insertAtHead(head);
    }
    int currentPosition = -1;
    struct Node *current = head;
    while (current != NULL && currentPosition != position - 1)
    {
        current = current->next;
        currentPosition++;
    }
    if (current == NULL || currentPosition != position - 1)
    {
        cout << "The list must contain elements upto " << position - 1 << " position." << endl;
    }
    else
    {
        struct Node *newNode = (Node *)malloc(sizeof(Node));
        newNode->data = 1;
        struct Node *previousLast = current->next;
        current->next = newNode;
        newNode->next = previousLast;
    }
    return head;
}

struct Node *searchInList(Node *head, int data = 0)
{
    struct Node *current = head;
    while (current != NULL)
    {
        if (current->data == data)
        {
            cout << "Data Found" << endl;
            return head;
        }
        current = current->next;
    }
    cout << "Data Not Found" << endl;
    return head;
}
int main()
{
    struct Node *head = NULL;
    int option = -1;
    while (option != 0)
    {
        cout << "\t\tMenu\t\t" << endl;
        cout << "Press 0 to exit." << endl;
        cout << "Press 1 to print the linked list." << endl;
        cout << "Press 2 to add to linked list." << endl;
        cout << "Enter 3 to find the length of the linked list." << endl;
        cout << "Enter 4 to insert at head." << endl;
        cout << "Enter 5 to insert at kth position." << endl;
        cout << "Enter 6 to search in list" << endl;
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
        case 3:
            head = lengthOfLinkedList(head);
            break;
        case 4:
            head = insertAtHead(head);
            break;
        case 5:
            cout << "Enter kth position where to insert: ";
            int position;
            cin >> position;
            head = insertAtKthPosition(head, position);
            break;
        case 6:
            head = searchInList(head, 0);
            break;
        }
    }
    cout << "\n\nThank you !" << endl;
    return 0;
}