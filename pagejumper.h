// pagejumper.h
#ifndef PAGEJUMPER_H
#define PAGEJUMPER_H

#include <QObject>
#include <QDebug>
class pagejumper : public QObject {
    Q_OBJECT

public:
    static pagejumper& getInstance() {
        static pagejumper instance;
        return instance;
    }

    void pageJumpSender(int targetPage) {
        // 实现页面跳转逻辑
        qDebug() << "Trying to emit jumpRequested with targetPage:" << targetPage;
        emit jumpRequested(targetPage);
    }

signals:
    void jumpRequested(int targetPage);

private:
    // 私有化构造函数和复制构造函数以禁止外部构造和复制
    pagejumper(QObject *parent = nullptr) : QObject(parent) {}
    pagejumper(const pagejumper&) = delete;
    void operator=(const pagejumper&) = delete;
};

#endif // PAGEJUMPER_H
