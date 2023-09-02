#ifndef TODOLISTAPP_TASK_H
#define TODOLISTAPP_TASK_H
#include <iostream>
#include <chrono>

class Task {
    int id;
    std::string title;
    std::string description;
    time_t dueDate;
    bool completed;

public:
    Task(const std::string &title, const std::string &description, time_t dueDate, bool isDone);

    //getters
    int getId() const;

    const std::string &getTitle() const;

    const std::string &getDescription() const;

    time_t getDueDate() const;

    bool isCompleted() const;

    //setters
    void setTitle(const std::string &title);

    void setDescription(const std::string &description);

    void setDueDate1(time_t dueDate);

    void setCompleted(bool completed);

    //custom functions
    void markAsCompleted();
    void updateDescription();
    void setDueDate();

    virtual ~Task();
};


#endif //TODOLISTAPP_TASK_H
