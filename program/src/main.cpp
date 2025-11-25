#include <iostream>
#include "Task.hh"
#include "TaskList.hh"

using namespace std;

int main()
{
    TaskList *taskList = new TaskList();
    Task *task1 = new Task(1, "Do dishes", "Dishes are to be done");

    taskList->addTask(*task1);
    cout << taskList->toString() << endl;

    taskList->markDone(task1->getId());
    cout << taskList->toString() << endl;

    taskList->removeTask(task1->getId());
    cout << taskList->toString() << endl;

    return 0;
}