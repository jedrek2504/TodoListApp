#include <vector>
#include "Task.hh"

class TaskList
{
    std::vector<Task> tasks;

public:
    TaskList() = default;

    void addTask(const Task &task);
    bool removeTask(const int &id);
    bool markDone(const int &id);
    std::string toString();

    ~TaskList() = default;
};