#include "p4_dot.h"
#include "ui_p4_dot.h"
#include <nlohmann/json.hpp>
#include <QCoreApplication>
#include <QFile>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QDebug>
#include <QVBoxLayout>
#include <QTimer>
#include <QEventLoop>
const int sleeptime = 5000;
// 模拟非阻塞延时
void delay(int milliseconds) {
    QEventLoop loop;
    QTimer::singleShot(milliseconds, &loop, &QEventLoop::quit);
    loop.exec();
}



p4_dot::p4_dot(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::p4_dot)
    , delayTimer(new QTimer(this))
{
    ui->setupUi(this);
    delay(sleeptime);
    DoT();
    connect(ui->p4_pushbutton_goback,&QPushButton::clicked,this, &p4_dot::goback);
    //connect(delayTimer, &QTimer::timeout, this, &p4_dot::A1);
}

void p4_dot::goback(){
    qDebug() << "回退->p3";
    // 通过pageJumper的单例调用pageJumpSender方法
    pagejumper::getInstance().pageJumpSender(p4_dot::targetPage_back);
}

p4_dot::~p4_dot()
{
    delete ui;
    delete delayTimer; // 清理定时器
}

void p4_dot::DoT(){

    QFile file_json("/Users/kylinsong/BDAS3/search_his.json");
    if (!file_json.open(QIODevice::ReadOnly)) {
        qDebug() << "无法打开文件";
        return;
    }

    QByteArray jsonData = file_json.readAll();
    file_json.close();

    QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData);
    if (jsonDoc.isNull() || !jsonDoc.isArray()) {
        qDebug() << "文件内容不是有效的 JSON 数组";
        return;
    }

    QJsonArray jsonArray = jsonDoc.array();
    if (jsonArray.isEmpty()) {
        qDebug() << "JSON 数组为空";
        return;
    }
    QJsonValue backgroundInfo = jsonArray.last();
    ui->p4_textBrowser_background->setText(backgroundInfo.toString());

    //delayTimer->start(2000); // 启动定时器等待2000毫秒
    delay(sleeptime);
    QTimer::singleShot(sleeptime, this, &p4_dot::A1);

}


void p4_dot::A1(){
    //第1层
    qDebug() << "Entering A1()";  // 检查这个函数是否被调用
    QTimer::singleShot(20000, this, &p4_dot::A2);
}

void p4_dot::A2(){
    //第2层
    qDebug() << "Entering A1()";  // 检查这个函数是否被调用
    QString re1 =
        "\n远程控制工程机械的需求"
        "\n对工程机械操作的精确性需求"
        "\n对操作的反馈及时性需求"
        "\n操作手的舒适度需求"
        "\n操作手的操作便利性需求"
        "\n操作手的安全性需求"
        "\n操作手的操作习惯"
        "\n工程机械设计制造企业的制造成本需求"
        "\n工程机械需求单位的使用成本需求",
        re2 =
        "\n远程控制工程机械的需求"
        "\n手部操作舒适度"
        "\n手部康复功能"
        "\n手部抓握能力增强"
        "\n智能手环功能"
        "\n全球定位系统"
        "\n蜂窝无线电通信"
        ,
        re3 =
        "\n实现远程控制工程机械功能"
        "\n兼顾操作者的舒适度"
        "\n具备抗疲劳设计"
        "\n满足长时操作需求"
        "\n配备精准控制系统"
        "\n集成实时反馈功能"
        "\n符合机械操作的安全标准"
        "\n具备足够的机械强度与稳定性"
        "\n充电或电池寿命长，适应长时间使用"
        "\n配备紧急停止或安全控制系统"
        "\n防水防尘设计"
        "\n低延迟操作体验"
        "\n工程机械状态实时监控"
        ,
        re_converge =
        "\n远程控制工程机械的需求"
        "\n对工程机械操作的精确性需求"
        "\n对操作的反馈及时性需求"
        "v操作手的舒适度需求"
        "\n操作手的操作便利性需求"
        "\n操作手的安全性需求"
        "\n工程机械状态实时监控"
        "\n防水防尘设计"
        "\n充电或电池寿命长，适应长时间使用"
        "\n配备紧急停止或安全控制系统"
        ,
        func1 =
        "product_name: 工程机械远程控制手套"
        "\nproduct_definition: 这款工程机械远程控制手套通过先进的机器人技术和外骨骼技术，实现高精度、实时的远程控制，极大提高工作效率和安全性。手套内部机械结构和电子设备均采用防水防尘设计，适应各种恶劣环境。内嵌的高容量电池，可持续长时间使用。配备紧急停止按钮，确保操作时的安全。"
        "\nform_factor: 手套外部采用防水防尘材料，内部装有精细的机械结构和电子设备，手背部位有紧急停止按钮。"
        "\ninteraction_method: 通过手套上的按钮和滑动条进行操作，与工程机械进行无线连接，实时反馈操作信息。"
        "\nWearing_way: 像普通手套一样穿在手上，手背部位有调节魔术贴，可根据手型进行调节。"
        "\nfunctions:"
        "\n   高精度远程控制：通过机器人技术和外骨骼技术，实现精确的远程控制，提高工作效率和安全性。"
        "\n   实时反馈：通过无线连接，实时反馈工程机械的操作信息，提高工作效率。"
        "\n   防水防尘：手套内部机械结构和电子设备均采用防水防尘设计，适应各种恶劣环境。"
        "\n   长时间使用：内嵌高容量电池，可持续长时间使用。"
        "\n   紧急停止：配备紧急停止按钮，确保操作时的安全。"
        ,
        func2 =
        "\nproduct_name: 智能工程机械远程控制手套"
        "\nproduct_definition: 这款智能工程机械远程控制手套是一款专为工程机械操作手设计的，可实现精确、安全的远程操作。它采用先进的机器人技术和外骨骼技术，配合液压缸和关节铰链，使操作手在进行复杂的操作时，能够获得良好的反馈和精确的控制。同时，手套还具有防水防尘和长电池寿命的特点，适应长时间使用。手套配备紧急停止或安全控制系统，保障操作手的安全。"
        "\nform_factor: 手套形式，采用高弹性和耐磨材料制成，内部装有高精度传感器和驱动部件。"
        "\ninteraction_method: 通过手部动作感应和无线通信技术进行信息交互，可以通过手机或电脑等设备实时查看工程机械的状态和操作信息。"
        "\nWearing_way: 直接穿戴在手上，有调节带可以调整大小，适应不同大小的手。"
        "\nfunctions: "
        "\n   远程控制：通过手套的动作感应和无线通信技术，实现对工程机械的远程操作。"
        "\n   精确操作：内置高精度传感器和驱动部件，使操作手可以进行精确的操作。"
        "\n   及时反馈：通过无线通信技术，实时反馈工程机械的状态和操作信息，提高操作的准确性和安全性。"
        "\n   舒适穿戴：手套采用高弹性和耐磨材料制成，适应不同大小的手，穿戴舒适。"
        "\n   防水防尘：手套采用防水防尘设计，适应各种环境使用。"
        "\n   长电池寿命：手套的电池寿命长，适应长时间使用。"
        "\n   安全控制系统：手套配备紧急停止或安全控制系统，保障操作手的安全。"
        ,
        func3 =
        "\nproduct_name: 工程机械智能控制手套"
        "\nproduct_definition: 这款工程机械智能控制手套是一种将人体自然运动转换为机械设备控制指令的可穿戴设备。使用者只需通过手势和指尖触摸，就能实现对工程机械的精确操作。同时，通过高效的反馈系统，操作者能够实时感知到设备的运行状态，提高操作的准确性和安全性。"
        "\nform_factor: 手套型设计，适应各种手型，内置高灵敏度传感器，外部采用防水防尘材料，内部有防滑设计。"
        "\ninteraction_method: 通过手势和指尖触控进行操作，配有无线连接功能，可通过蓝牙或Wi-Fi与工程机械设备进行连接。"
        "\nWearing_way: 像普通手套一样穿在手上，有调节带可以调节松紧度。"
        "\nfunctions:"
        "\n   手势控制：通过内置的高灵敏度传感器，捕捉使用者的手势，转换为工程机械的操作指令。"
        "\n   指尖触控：通过指尖对特定区域的触摸，实现对工程机械的精细操作，如调节速度、切换功能等。"
        "\n   实时反馈：通过震动或音频信号，将工程机械的运行状态实时反馈给操作者，提高操作的准确性和安全性。"
        "\n   紧急停止：设有紧急停止按键，一旦遇到危险，可以立即停止工程机械的运行。"
        "\n   防水防尘：外壳采用防水防尘材料，适应各种工作环境。"
        "\n   长久续航：内置高容量电池，可保证长时间的使用。"
        ,
        func_converge =
        "\nproduct_name: 智能工程机械远程控制手套"
        "\nproduct_description: 这款智能工程机械远程控制手套是一款专为工程机械操作手设计的，可实现精确、安全的远程操作。它采用先进的机器人技术和外骨骼技术，配合液压缸和关节铰链，使操作手在进行复杂的操作时，能够获得良好的反馈和精确的控制。同时，手套还具有防水防尘和长电池寿命的特点，适应长时间使用。手套配备紧急停止或安全控制系统，保障操作手的安全。"
        "\nform_factor: 手套形式，采用高弹性和耐磨材料制成，内部装有高精度传感器和驱动部件，手背部位有紧急停止按钮。"
        "\nWearing_way: 直接穿戴在手上，有调节带可以调整大小，适应不同大小的手。"
        "\ninteraction_method: 通过手部动作感应和无线通信技术进行信息交互，可以通过手机或电脑等设备实时查看工程机械的状态和操作信息。"
        "\nfunctions:"
        "\n   远程控制：通过手套的动作感应和无线通信技术，实现对工程机械的远程操作。"
        "\n   精确操作：内置高精度传感器和驱动部件，使操作手可以进行精确的操作。"
        "\n   及时反馈：通过无线通信技术，实时反馈工程机械的状态和操作信息，提高操作的准确性和安全性。"
        "\n   舒适穿戴：手套采用高弹性和耐磨材料制成，适应不同大小的手，穿戴舒适。"
        "\n   防水防尘：手套采用防水防尘设计，适应各种环境使用。"
        "\n   长电池寿命：手套的电池寿命长，适应长时间使用。"
        "\n   安全控制系统：手套配备紧急停止或安全控制系统，保障操作手的安全。"
        ,
        tech1 =
        "\n动作感应技术: 利用高精度传感器，实时监测操作手的手部动作，转化为工程机械的操作信号"
        "\n无线通信技术: 通过蓝牙或WiFi等无线通信技术，实现手套与工程机械的信息交互"
        "\n驱动部件和反馈系统: 内置微型驱动部件，通过振动或压力反馈，为操作手提供实时的操作反馈"
        "\n防水防尘设计: 使用防水防尘的材料和设计，提高手套的耐用性和适应性"
        "\n长寿命电池技术: 采用高容量电池，配合低能耗设计，实现长时间使用"
        "\n安全控制系统: 配备紧急停止按钮和安全锁定系统，确保在出现异常情况时能够及时停止工程机械，保障操作手的安全"
        ,
        tech2 =
        "\n无线通信技术：利用蓝牙或Wi-Fi实现手套与工程机械之间的信息传输，实现远程控制。"
        "\n机器人技术和外骨骼技术：结合液压缸和关节铰链，实现对工程机械的精确操作和及时反馈。"
        "\n高精度传感器和驱动部件：内置在手套中，实现对手部动作的精确感应和驱动。"
        "\n高弹性和耐磨材料：制作手套，保证其耐用性和舒适度，适应不同大小的手。"
        "\n防水防尘设计：采用特殊材料和处理技术，使手套具有防水防尘的特性，适应各种环境使用。"
        "\n紧急停止或安全控制系统：内置在手套中，通过特定的手势或按键操作，实现对工程机械的紧急停止或安全控制，保障操作手的安全。"
        ,
        tech3 =
        "\n机器人技术与外骨骼技术：配合液压缸和关节铰链，实现手套的灵活运动和精确控制，使操作手可以进行复杂的操作。"
        "\n高精度传感器：内置在手套中，用于感应操作手的手势和动作，实现对工程机械的精确控制。"
        "\n无线通信技术：用于实现手套与工程机械之间的信息交互，包括控制指令的发送和状态信息的反馈。"
        "\n防水防尘材料：手套采用防水防尘材料制成，适应各种工作环境。"
        "\n高容量电池：为手套提供持久的电力支持，适应长时间使用。"
        "\n紧急停止或安全控制系统：内置在手套中，用于在紧急情况下停止工程机械的操作，保障操作手的安全。"
        ,
        tech_converge =
        "\n高精度动作感应技术: 利用高精度传感器监测操作手的手部动作，转化为工程机械的操作信号。"
        "\n无线通信技术: 利用蓝牙或WiFi进行信息交互，实现与工程机械的远程控制。"
        "\n驱动部件和反馈系统: 内置微型驱动部件，通过振动或压力反馈，提供实时操作反馈。"
        "\n防水防尘设计: 使用防水防尘的材料和设计，提高手套的耐用性和适应性。"
        "\n长寿命电池技术: 采用高容量电池，配合低能耗设计，实现长时间使用。"
        "\n安全控制系统: 配备紧急停止按钮和安全锁定系统，确保在异常情况时能及时停止工程机械，保障操作手的安全。"
        ;
    QString competitors =
        "名称:智能手套; 品类:手套; 功能:智能手套、手部瘫痪患者运动能力增强、瘫痪者日常生活辅助; 技术:防水技术（Waterproof technology）、3D打印技术（3D printing technology）、机器人技术（Robotics），软体机器人技术（soft robot technologies）、外骨骼技术（Exoskeleton technology）、; 穿戴部位:手部; 身体关系:穿着"
        "名称:环拉式柔软可穿戴机器人手套; 品类:手套; 功能:手部力量增强; 技术:连杆结构（Connecting rod）、机器人技术（Robotics）、气动人工肌肉（Pneumatic artificial muscles）、; 穿戴部位:手臂; 身体关系:佩戴"
        "名称:动力辅助和康复可穿戴机器人; 品类:手套; 功能:手部抓握能力增强; 技术:机器人技术（Robotics）、肌电图检测技术（Electromyogram (EMG) signal detection）、外骨骼技术（Exoskeleton technology），液压缸（hydraulic cylinders）、 关节铰链（Exoskeleton Joint Hinge）、碳纤维技术（Carbon-fiber-reinforced polymers）、碳纳米管（Carbon nanotube）、; 穿戴部位:手部; 身体关系:穿着"
        ;
    delay(sleeptime);
    ui->p4_textBrowser_desicovery->setText(competitors);
    delay(sleeptime);
    ui->p4_textBrowser_requirement1->setText(re1);
    delay(sleeptime);
    ui->p4_textBrowser_requirement2->setText(re2);
    delay(sleeptime);
    ui->p4_textBrowser_requirement3->setText(re3);
    delay(sleeptime);
    ui->p4_textBrowser_requirement_converge->setText(re_converge);
    ui->p4_textBrowser_func1->setText(func1);
    delay(sleeptime);
    ui->p4_textBrowser_func2->setText(func2);
    delay(sleeptime);
    ui->p4_textBrowser_func3->setText(func3);
    delay(sleeptime);
    ui->p4_textBrowser_func_converge ->setText(func_converge);
    delay(sleeptime);
    ui->p4_textBrowser_tech1->setText(tech1);
    delay(sleeptime);
    ui->p4_textBrowser_tech2->setText(tech2);
    delay(sleeptime);
    ui->p4_textBrowser_tech3->setText(tech3);
    delay(sleeptime);
    ui->p4_textBrowser_tech_converge ->setText(tech_converge);
}



