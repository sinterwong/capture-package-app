/**
 * @file test_oatpp_http.cpp
 * @author Sinter Wong (sintercver@gmail.com)
 * @brief
 * @version 0.1
 * @date 2025-02-26
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <gtest/gtest.h>
#include <oatpp/core/base/Environment.hpp>
#include <oatpp/core/macro/codegen.hpp>
#include <oatpp/network/Server.hpp>
#include <oatpp/network/tcp/client/ConnectionProvider.hpp>
#include <oatpp/web/client/HttpRequestExecutor.hpp>
#include <oatpp/web/protocol/http/Http.hpp>
#include <oatpp/web/protocol/http/outgoing/BufferBody.hpp>

#include <thread>

namespace oatpp_test::http {
class TestComponent {
public:
  TestComponent() {}
  ~TestComponent() {}
};

TEST(OatppHttpTest, ServerClient) {}
} // namespace oatpp_test::http