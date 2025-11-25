#include "TaskList.hh"
#include <algorithm>
#include <sstream>

void TaskList::addTask(const Task &task)
{
    tasks.push_back(task);
}

bool TaskList::removeTask(const int &id)
{
    auto it = std::remove_if(tasks.begin(), tasks.end(),
                             [id](Task &t)
                             { return t.getId() == id; });

    bool removed = (it != tasks.end());

    tasks.erase(it, tasks.end());

    return removed;
}

bool TaskList::markDone(const int &id)
{
    auto it = std::find_if(tasks.begin(), tasks.end(),
                           [id](Task &t)
                           { return t.getId() == id; });

    if (it != tasks.end())
    {
        it->markAsDone();
        return true;
    }
    return false;
}

std::string TaskList::toString()
{
    std::ostringstream os;
    os << '{' << std::endl;
    os << "Tasks: " << std::endl;
    for (auto &task : tasks)
    {
        os << task.toString() << std::endl;
    }
    os << '}' << std::endl;
    return os.str();
}
