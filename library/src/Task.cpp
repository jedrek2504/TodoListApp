#include "../include/Task.h"



Task::Task(const std::string &title, const std::string &description, time_t dueDate, bool isDone) : title(title),
                                                                                                    description(
                                                                                                            description),
                                                                                                    dueDate(dueDate),
                                                                                                    completed(isDone) {
}

void Task::markAsCompleted() {
    this->completed=true;
}

void Task::updateDescription() {

}

void Task::setDueDate() {

}




Task::~Task() {

}

//getters
int Task::getId() const {
    return id;
}

const std::string &Task::getTitle() const {
    return title;
}

const std::string &Task::getDescription() const {
    return description;
}

time_t Task::getDueDate() const {
    return dueDate;
}

bool Task::isCompleted() const {
    return completed;
}

void Task::setTitle(const std::string &title) {
    Task::title = title;
}

void Task::setDescription(const std::string &description) {
    Task::description = description;
}

void Task::setDueDate1(time_t dueDate) {
    Task::dueDate = dueDate;
}

void Task::setCompleted(bool completed) {
    Task::completed = completed;
}

