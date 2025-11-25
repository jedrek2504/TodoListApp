#pragma once

#include <iostream>

class Task
{
    int id;
    std::string title;
    std::string description;
    bool isDone;

public:
    Task(const int &id, const std::string &title, const std::string &description, const bool &isDone = false);

    void markAsDone();
    void updateDescription(const std::string &newDescription);
    void updateTitle(const std::string &newTitle);
    std::string toString() const;

    ~Task();
};
