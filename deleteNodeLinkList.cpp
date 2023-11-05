#include <iostream>

using namespace std;

struct Block
{
    int data;
    Block *next;
};

// Function to insert a new node at the end of the linked list
void insertNode(Block *&head, int value)
{
    Block *newNode = new Block;
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Block *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to display the linked list
void displayList(Block *head)
{
    Block *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteFirstNode(Block *&head)
{
    if (head != nullptr)
    {
        Block *temp = head;
        head = head->next;
        delete temp;
    }
}

void deleteLastNode(Block *&head)
{
    // first check if firstNode is NULL or last node.
    if (head == nullptr)
    {
        return;
    }

    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return;
    }

    Block *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;
}

void deleteNodeWithValue(Block *&head, int value)
{
    if (head == nullptr)
    {
        return;
    }

    if (head->data == value)
    {
        deleteFirstNode(head);
        return;
    }

    Block *temp = head;
    Block *ptemp = nullptr;

    while (temp != nullptr)
    {
        if (temp->data == value)
        {
            ptemp->next = temp->next;
            delete temp;
            return;
        }
        ptemp = temp;
        temp = temp->next;
    }
}

int main()
{
    Block *head = nullptr;

    while (true)
    {
        int choice;
        cout << "Choose an option:\n";
        cout << "1. Insert a node\n";
        cout << "2. Delete the first node\n";
        cout << "3. Delete the last node\n";
        cout << "4. Delete a node by value\n";
        cout << "5. Display the linked list\n";
        cout << "6. Exit\n";

        // taking user input
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int value;
            cout << "Enter the value to insert: ";
            cin >> value;
            insertNode(head, value);
            break;
        }
        case 2:
        {
            deleteFirstNode(head);
            break;
        }
        case 3:
        {
            deleteLastNode(head);
            break;
        }
        case 4:
        {
            int value;
            cout << "Enter the value to delete: ";
            cin >> value;
            deleteNodeWithValue(head, value);
            break;
        }
        case 5:
        {
            cout << "Linked List: ";
            displayList(head);
            break;
        }
        case 6:
        {
            // Exit the program
            return 0;
        }
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
