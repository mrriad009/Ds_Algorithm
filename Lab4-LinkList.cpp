#include <iostream>
#include <string>

using namespace std;

struct Block
{
    string name;
    int id;
    Block *next;

    Block(string Name, int ID)
    {
        name = Name;
        id = ID;
        next = nullptr;
    }
};

void display(Block *head)
{
    Block *temp = head;
    while (temp != nullptr)
    {
        cout << "Name: " << temp->name << ", ID: " << temp->id << endl;
        temp = temp->next;
    }
}

Block *search(Block *head, string target)
{
    Block *temp = head;
    while (temp != nullptr)
    {
        if (temp->name == target)
        {
            return temp;
        }
        temp = temp->next;
    }
    return nullptr; // Name not found
}

int main()
{
    // Create a linked list with the initial head
    Block *head = new Block("Captain", 1);
    Block *temp = head;

    temp->next = new Block("Zoro", 2);
    temp = temp->next;

    temp->next = new Block("Lufy D Monkey", 3);
    temp = temp->next;

    temp->next = new Block("Pirates", 4);
    temp = temp->next;

    temp->next = new Block("FishMan", 5);

    // Display the data of the linked list
    cout << "Data in the linked list:" << endl;
    display(head);

    // Prompt the user for a name to search
    cout << "Enter a name to search for: ";
    string target;
    cin >> target;

    // Search for the name
    Block *result = search(head, target);

    if (result != nullptr)
    {
        cout << "Target  found :)  Name:" << result->name << " ID: " << result->id << "\n"
             << endl;
    }
    else
    {
        cout << "Name not found :( \n"
             << endl;
    }

    return 0;
}
