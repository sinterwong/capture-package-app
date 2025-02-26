#include <gtest/gtest.h>
#include <rapidxml.hpp>
#include <string>

using namespace rapidxml;

TEST(RapidXmlTest, Normal) {
  std::string xml = "<root><node>capture-package-app</node></root>";
  xml_document<> doc;
  doc.parse<0>((char *)xml.data());
  xml_node<> *node = doc.first_node("root")->first_node("node");
  ASSERT_STREQ(node->value(), "capture-package-app");
}
