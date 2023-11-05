#include <iostream>
#include <string>

using namespace std;

const int MAX_TASKS = 100; // Maximum number of tasks

struct Task
{
    string description;
    bool completed;
};

void addTask(Task taskList[], int &taskCount)
{
    if (taskCount < MAX_TASKS)
    {
        Task newTask;
        cout << "Enter task description: ";
        cin.ignore(); // Clear the input buffer
        getline(cin, newTask.description);
        newTask.completed = false;
        taskList[taskCount] = newTask;
        taskCount++;
    }
    else
    {
        cout << "Task list is full! You cannot add more tasks.\n";
    }
}

void displayTasks(const Task taskList[], int taskCount)
{
    cout << "Tasks:\n";
    for (int i = 0; i < taskCount; ++i)
    {
        cout << i + 1 << ". ";
        if (taskList[i].completed)
        {
            cout << "[X] ";
        }
        else
        {
            cout << "[ ] ";
        }
        cout << taskList[i].description << "\n";
    }
}

void markComplete(Task taskList[], int taskCount)
{
    displayTasks(taskList, taskCount);
    cout << "Enter the task number to mark as complete: ";
    int taskNumber;
    cin >> taskNumber;
    if (taskNumber >= 1 && taskNumber <= taskCount)
    {
        taskList[taskNumber - 1].completed = true;
    }
    else
    {
        cout << "Invalid task number!\n";
    }
}

int main()
{
    Task tasks[MAX_TASKS];
    int taskCount = 0;
    int choice;

    do
    {
        cout << "\nTo-Do List Menu:\n";
        cout << "1. Add Task\n";
        cout << "2. Display Tasks\n";
        cout << "3. Mark Task as Complete\n";
        cout << "4. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addTask(tasks, taskCount);
            break;
        case 2:
            displayTasks(tasks, taskCount);
            break;
        case 3:
            markComplete(tasks, taskCount);
            break;
        case 4:
            cout << "Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
