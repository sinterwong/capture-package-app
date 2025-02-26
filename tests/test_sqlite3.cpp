#include <gtest/gtest.h>
#include <sqlite3.h>

namespace sqlite3_test {
using namespace sqlite3_test;
TEST(Sqlite3Test, OpenClose) {
  sqlite3 *db;
  ASSERT_EQ(sqlite3_open(":memory:", &db), SQLITE_OK);
  ASSERT_NE(db, nullptr);
  sqlite3_close(db);
}
} // namespace sqlite3_test
