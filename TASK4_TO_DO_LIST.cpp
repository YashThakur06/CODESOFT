#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> tasks;

    while (true) {
    	cout<<"========================";
        cout << "\n1. Add Task\n";
        cout << "2. Remove Task\n";
        cout << "3. Display Tasks\n";
        cout << "4. Quit\n";
        cout<<"========================"<<endl;
        cout << "Enter your choice from above: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                string task;
                cout << "Enter task: "<<endl;
                cin.ignore();
                getline(cin, task);
                tasks.push_back(task);
                cout<<"-------------------------"<<endl;
                cout << "Task added: " << task << endl;
                cout<<"-------------------------"<<endl;
                break;
            }
            case 2: {
                if (tasks.empty()) {
                	 cout<<"------------------------"<<endl;
                    cout << "No tasks to remove.\n";
                     cout<<"------------------------"<<endl;
                } else {
                    cout << "Tasks:\n";
                    for (size_t i = 0; i < tasks.size(); ++i) {
                        cout << i + 1 << ". " << tasks[i] << endl;
                    }

                    int index;
                    cout << "Enter index to remove: ";
                    cin >> index;

                    if (index >= 1 && index <= static_cast<int>(tasks.size())) {
                        cout<<"------------------------------"<<endl;
						cout << "Task removed: " << tasks[index - 1] << endl;
						cout<<"------------------------------"<<endl;
                        tasks.erase(tasks.begin() + index - 1);
                    } else {
                    	cout<<"------------------------------------"<<endl;
                        cout << "Invalid index. Task not removed.\n";
                        cout<<"------------------------------------"<<endl;
                    }
                }
                break;
            }
           
                case 3:
                if (tasks.empty()) {
                	cout<<"---------------"<<endl;
                    cout << "No tasks.\n";
                   	cout<<"---------------"<<endl;
                } else {
                    cout << "To-Do List:\n";
                for (size_t i = 0; i < tasks.size(); ++i) {
                	cout<<"-------------------"<<endl;
                    cout << "- " << tasks[i] << endl;
                   	cout<<"-------------------"<<endl;
           }
    }
                   break;

            case 4:
                cout << "Exiting program.\n";
                return 0;
            default:
            	cout<<"-----------------------------------------------"<<endl;
                cout << "Invalid choice. Please enter a valid option.\n";
               	cout<<"-----------------------------------------------"<<endl;
        }
    }

    return 0;
}

