#include <gtest/gtest.h>
#include "Task.hh"

TEST(TaskTest, ConstructorInitializesFields)
{
    Task t(1, "Do dishes", "Dishes are to be done");

    std::string s = t.toString();
    EXPECT_NE(s.find("id: 1"), std::string::npos);
    EXPECT_NE(s.find("Do dishes"), std::string::npos);
    EXPECT_NE(s.find("done: false"), std::string::npos);
}

TEST(TaskTest, MarkAsDoneSetsFlag)
{
    Task t(10, "Laundry", "White only");
    t.markAsDone();

    EXPECT_NE(t.toString().find("done: true"), std::string::npos);
}
