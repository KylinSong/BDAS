#ifndef P6_CHATBDAS_H
#define P6_CHATBDAS_H

#include <QWidget>
#include "pagejumper.h"

const QString ans =
    "根据项目一的内容，结合温度身体地图，我可以给出以下设计注意事项:"
    "\n手部温度敏感度管理：\n   根据温度敏感度表，手部的温度敏感度较低（<4.5级），但考虑到操作精确性和舒适性，手部的温控依然至关重要。设计手套时，可以在内侧使用透气性好的材料，以增强空气流通，防止手部因长时间穿戴而过热或出汗。"
    "\n高精度温度调节：\n   集成微型温控系统，如Peltier温控片，能够根据传感器反馈精确调节手部温度。这种系统可以在感知到手部温度升高时自动启动冷却，或在环境温度较低时提供适量的加热，保持手部的温度在最适宜操作的范围内。"
    "\n动态温感反馈系统：\n   利用MR技术和实时反馈系统，模拟真实触感和力反馈，同时加入温度反馈。例如，当手套接触到虚拟环境中热源时，手套可以局部提供温感体验，增强操作的沉浸感和真实感。"
    "\n环境适应性与安全防护：\n   考虑到工程机械操作可能涉及到各种环境，设计时应确保手套能够在极端温度下也能保持性能。采用防水防震材料制作外层，防止环境因素影响电子组件和温度调节功能。"
    "\n人体工程学设计：\n   手套设计需符合人体工程学原则，特别是在手腕和手指的关节部位，保证全天候的舒适度和灵活性。关节处的材料需要柔软且支持良好的移动性，同时在这些部分考虑增加微型风扇或通风孔，帮助散热和调节温度。"
    ;

namespace Ui {
class p6_chatBDAS;
}

class p6_chatBDAS : public QWidget
{
    Q_OBJECT

public:
    explicit p6_chatBDAS(QWidget *parent = nullptr);
    static pagejumper* pageJumper;
    ~p6_chatBDAS();
protected:
    void keyPressEvent(QKeyEvent *event) override;  // 添加对键盘事件的处理
private:
    int page_exit = 0;
    Ui::p6_chatBDAS *ui;
private slots:
    void goback();
    void getans();
    void infoBrowser();
};


#endif // P6_CHATBDAS_H
