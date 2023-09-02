#ifndef TODOLISTAPP_TASK_H
#define TODOLISTAPP_TASK_H
#include <iostream>
#include <chrono>

class Task {
    int id;
    std::string title;
    std::string description;
    time_t dueDate;
    bool isDone;
public:


    void markAsCompleted();
    void updateDescription();
    void setDueDate();
};


#endif //TODOLISTAPP_TASK_H
