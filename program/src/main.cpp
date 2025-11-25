#include <iostream>
#include "Task.hh"

using namespace std;

int main()
{
    Task *task1 = new Task(1, "Do dishes", "Dishes are to be done");

    task1->markAsDone();
    cout << task1->toString() << endl;

    return 0;
}