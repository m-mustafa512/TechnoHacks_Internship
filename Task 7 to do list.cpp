#include <iostream>
#include <vector>
using namespace std;

class Task {
private:
    string description;
    bool completed;

public:
    Task(string desc) : description(desc), completed(false) {}

    void markCompleted() {
        completed = true;
    }

    bool isCompleted() const {
        return completed;
    }

    string getDescription() const {
        return description;
    }
};

class ToDoList {
private:
    vector<Task> tasks;

public:
    void addTask(string description) {
        Task newTask(description);
        tasks.push_back(newTask);
    }

    void viewTasks() {
        if (tasks.empty()) {
            cout << "No tasks in the list." << endl;
            return;
        }

        cout << "Tasks:" << endl;
        for (unsigned int i = 0; i < tasks.size(); i++) {
            cout << i + 1 << ". ";
            cout << (tasks[i].isCompleted() ? "[X] " : "[ ] ");
            cout << tasks[i].getDescription() << endl;
        }
        cout<<endl;
    }

    void markTaskCompleted(int index) {
        if (index >= 0 && index < static_cast<int>(tasks.size())) {
            tasks[index].markCompleted();
        } else {
            cout << "Invalid task index." << endl;
        }
    }

    void removeTask(int index) {
        if (index >= 0 && index < static_cast<int>(tasks.size())) {
            tasks.erase(tasks.begin() + index);
        } else {
            cout << "Invalid task index." << endl;
        }
    }
};

int main() {
    ToDoList todo;
    int choice;
    string description;
    int index;
     cout << "_______________________________________________________________________________________________________________________\n";
        cout << "\t\t\t\t-----TO DO LIST-----\n";
        cout << "\t\t\t\t---Created By: Muhammad Mustafa---\n";
        cout << "\t\t\t\t---TechnoHacks Internship---\n\n";
        cout << "_______________________________________________________________________________________________________________________\n";


    do {
    	
        cout << "Menu:" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter task description: ";
                cin.ignore(); // Clear buffer
                getline(cin, description);
                todo.addTask(description);
                cout<<endl;
                break;
            case 2:
                todo.viewTasks();
                break;
            case 3:
                cout << "Enter task index to mark as completed: ";
                cin >> index;
                todo.markTaskCompleted(index - 1); // Subtract 1 as displayed index starts from 1
                cout<<endl;
                break;
            case 4:
                cout << "Enter task index to remove: ";
                cin >> index;
                todo.removeTask(index - 1); // Subtract 1 as displayed index starts from 1
                cout<<endl;
                break;
            case 5:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                cout<<endl;
        }
    } while (choice != 5);

    return 0;
}

