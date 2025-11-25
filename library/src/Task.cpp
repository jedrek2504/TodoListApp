#include "Task.hh"
#include <sstream>

Task::Task(const int &id, const std::string &title, const std::string &description, const bool &isDone) : id(id), title(title), description(description), isDone(isDone)
{
}

void Task::markAsDone()
{
    isDone = true;
}

void Task::updateDescription(const std::string &newDescription)
{
    description = newDescription;
}

void Task::updateTitle(const std::string &newTitle)
{
    title = newTitle;
}

std::string Task::toString() const
{
    std::ostringstream oss;
    oss << "Task { "
        << "id: " << id << ", "
        << "title: \"" << title << "\", "
        << "description: \"" << description << "\", "
        << "done: " << std::boolalpha << isDone
        << " }";

    return oss.str();
}

Task::~Task()
{
    // do nothing since no heap memory allocated
}
