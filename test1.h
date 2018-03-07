#ifndef TEST1_H
#define TEST1_H

#include <QObject>

class TestQString: public QObject
{
    Q_OBJECT

private slots:

  // 每个private slot函数都是会被自动调用的测试函数
  void testToLower();

  // 以“_data”结尾的函数向对应的测试函数提供测试数据
  void testToLower_data();

};

#endif // TEST1_H
