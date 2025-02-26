#include "logger/logger.hpp"
#include <gtest/gtest.h>

namespace logger_test {
class LoggerTest : public ::testing::Test {
protected:
  void SetUp() override {}
  void TearDown() override {}
};

TEST_F(LoggerTest, Normal) {}

} // namespace logger_test