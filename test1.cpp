#include "test1.h"
#include <QtTest/QtTest>

void TestQString::testToLower()
{
  // 获取测试数据
  QFETCH(QString, string);
  QFETCH(QString, result);
  // 如果输入的两个参数不同，则会被认为测试失败
  QCOMPARE(string.toLower(), result);
}

void TestQString::testToLower_data()
{
  // 添加数据列
  QTest::addColumn<QString>("string");
  QTest::addColumn<QString>("result");
  // 添加测试数据
  QTest::newRow("lower") << "hello" << "hello";
  QTest::newRow("mixed") << "HeLlO" << "hello";
  QTest::newRow("upper") << "HELLO" << "hello";
}
// 用于构建可执行的测试程序
QTEST_MAIN(TestQString)

