#include <gtest/gtest.h>
#include "TaskList.hh"

TEST(TaskListTest, AddTaskWorks)
{
    TaskList list;
    list.addTask(Task(1, "A", "B"));

    auto s = list.toString();
    EXPECT_NE(s.find("id: 1"), std::string::npos);
}

TEST(TaskListTest, RemoveTaskRemovesCorrectItem)
{
    TaskList list;
    list.addTask(Task(1, "A", "B"));
    list.addTask(Task(2, "C", "D"));

    EXPECT_TRUE(list.removeTask(1));

    auto s = list.toString();
    EXPECT_EQ(s.find("id: 1"), std::string::npos);
    EXPECT_NE(s.find("id: 2"), std::string::npos);
}

TEST(TaskListTest, MarkDoneUpdatesTask)
{
    TaskList list;
    list.addTask(Task(3, "Test", "X"));

    EXPECT_TRUE(list.markDone(3));

    auto s = list.toString();
    EXPECT_NE(s.find("done: true"), std::string::npos);
}
