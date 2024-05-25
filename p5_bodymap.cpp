#include "p5_bodymap.h"
#include "ui_p5_bodymap.h"
#include "bm_base.h"
#include "bm1.h"
#include "bm2.h"
#include "bm3.h"
#include "bm4.h"
#include "bm5.h"
#include "bm6.h"
#include "bm7.h"
#include "bm8.h"
#include "bm9.h"
#include <QString>
#include "pagejumper.h"

p5_bodymap::p5_bodymap(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::p5_bodymap)
{
    ui->setupUi(this);

    ui->p5_stackedWidget_bodymaps->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    auto map_base = new bm_base;
    auto map1 = new bm1;
    auto map2 = new bm2;
    auto map3 = new bm3;
    auto map4 = new bm4;
    auto map5 = new bm5;
    auto map6 = new bm6;
    auto map7 = new bm7;
    auto map8 = new bm8;
    auto map9 = new bm9;

    ui->p5_stackedWidget_bodymaps->addWidget(map_base);
    ui->p5_stackedWidget_bodymaps->addWidget(map1);
    ui->p5_stackedWidget_bodymaps->addWidget(map2);
    ui->p5_stackedWidget_bodymaps->addWidget(map3);
    ui->p5_stackedWidget_bodymaps->addWidget(map4);
    ui->p5_stackedWidget_bodymaps->addWidget(map5);
    ui->p5_stackedWidget_bodymaps->addWidget(map6);
    ui->p5_stackedWidget_bodymaps->addWidget(map7);
    ui->p5_stackedWidget_bodymaps->addWidget(map8);
    ui->p5_stackedWidget_bodymaps->addWidget(map9);

    connect(ui->comboBox, static_cast<void (QComboBox::*)(int)>(&QComboBox::currentIndexChanged), this, &p5_bodymap::goto_map);
    connect(ui->pushButton,& QPushButton::clicked,this,& p5_bodymap::goback);
    connect(ui->pushButton_gosearch,&QPushButton::clicked,this,&p5_bodymap::gonext);


}

p5_bodymap::~p5_bodymap()
{
    delete ui;
}

void p5_bodymap::goto_map(int index)
{
    QString str1 =
        "准备工作："
        "    \n    选择测试区域：选择上肢的11个皮肤区域进行测试。这些区域主要位于上臂和前臂。"
        "    \n    定义占优侧：测试主要在受试者的占优侧进行，通常是用于书写的手的同侧。"
        "    \n    舒适的体位：受试者应舒适地躺在仰卧位，以便轻松访问测试区域。"
        "    \n    环境温度控制：测试环境的温度应维持在舒适水平，约25°C。"
        "\n测试过程："
        "    \n    随机顺序：每个皮肤区域随机轻触20次以上，每次触摸间隔大约2秒。"
        "    \n    调整距离：在测试过程中，根据受试者的反应调整两点之间的距离，直到他们能够一致地正确指出是被一个点还是两个点同时触摸。"
        "    \n    避免重复：测试同一区域时，避免重复触摸相同的点，以减少对测试刺激的适应。"
        "    \n    毛发干扰：如果测试区域有毛发，注意避免触摸或移动毛发。"
        "\n结果判定："
        "    \n    最小辨别距离：记录每个受试者在每个测试区域能够可靠区分一个点或两点触摸的最小距离。"
        "    \n    准确性判断：当在10次连续触摸中有8次正确反应时，认为该区域的辨别值是准确和可靠的。"
        ;
    QString str3 =
        "实验在25°C和40%相对湿度的环境中进行，使用1.54平方厘米的热探头对皮肤进行加热和冷却。"
        "\n实验中包括了一个广泛的年龄和性别群体，测试对象为大学生和年轻研究员。"
        "\n温度刺激前的皮肤基线温度设定为31°C，温度刺激的变化范围为±5°C，特定脚部区域的刺激温度为±7°C。"
        "\n测量点分布在全身各个部位，包括脸部、手臂、胸部、腹部等，以确保高密度和全面的覆盖。"
        "\n热探头温度可以精确控制，反应速率为2.43°C/秒，使用热电偶珠精确测量接触点的皮肤温度。"
        "\n实验结果通过数值化的温度感觉评分（TSV）进行记录，评分范围从0（完全不热/不冷）到10（非常热/非常冷）。"
        ;


    switch(index)
    {
        case 0:
            ui->p5_stackedWidget_bodymaps->setCurrentIndex(0);
            ui->textBrowser_name->setText("null");
            ui->textBrowser_purpose->setText("null");
            ui->textBrowser_implementation->setText("null");
            ui->textBrowser_Principle->setText("null");
            ui->textBrowser_bodypart->setText("null");
            ui->textBrowser_Details->setText("null");
            ui->textBrowser_reference->setText("null");
            break;
        case 1:
            ui->p5_stackedWidget_bodymaps->setCurrentIndex(1);
            ui->textBrowser_name->setText("身体敏感度两点测试");
            ui->textBrowser_purpose->setText("被动触觉敏感度");
            ui->textBrowser_implementation->setPlainText("被动触觉敏感度");
            ui->textBrowser_Principle->setPlainText("人体力学");
            ui->textBrowser_bodypart->setPlainText("通用");
            ui->textBrowser_Details->setPlainText(str1);
            ui->textBrowser_reference->setPlainText(" https://www.researchgate.net/figure/Two-point-discrimination-test-results-and-interpretations_tbl3_266952072");
            break;
        case 2:
            ui->p5_stackedWidget_bodymaps->setCurrentIndex(2);
            ui->textBrowser_name->setText("身体敏感度两点测试");
            ui->textBrowser_purpose->setText("被动触觉敏感度");
            ui->textBrowser_implementation->setPlainText("被动触觉敏感度");
            ui->textBrowser_Principle->setPlainText("人体力学");
            ui->textBrowser_bodypart->setPlainText("通用");
            ui->textBrowser_Details->setPlainText(str1);
            ui->textBrowser_reference->setPlainText(" https://www.researchgate.net/figure/Two-point-discrimination-test-results-and-interpretations_tbl3_266952072");
            break;
        case 3:
            ui->p5_stackedWidget_bodymaps->setCurrentIndex(3);
            ui->textBrowser_name->setPlainText("人体温度敏感度测量方法");
            ui->textBrowser_purpose->setPlainText("测量体表不同位置温度敏感度");
            ui->textBrowser_implementation->setPlainText("利用直径14毫米的热探头在受试者体表的318个局部点位施加温度刺激，记录刺激前后的皮肤温度变化并通过问卷调查记录主观感受");
            ui->textBrowser_Principle->setPlainText("人体测量学");
            ui->textBrowser_bodypart->setPlainText("通用");
            ui->textBrowser_Details->setPlainText(str3);
            ui->textBrowser_reference->setPlainText("Luo M, Wang Z, Zhang H, et al. High-density thermal sensitivity maps of the human body[J]. Building and environment, 2020, 167: 106435.");
            break;
        case 4:
            ui->p5_stackedWidget_bodymaps->setCurrentIndex(4);
            ui->textBrowser_name->setPlainText(" ");
            ui->textBrowser_purpose->setPlainText("");
            ui->textBrowser_implementation->setPlainText("");
            ui->textBrowser_Principle->setPlainText("");
            ui->textBrowser_bodypart->setPlainText("");
            ui->textBrowser_Details->setPlainText("");
            ui->textBrowser_reference->setPlainText("");
            break;
        case 5:
            ui->p5_stackedWidget_bodymaps->setCurrentIndex(5);
            ui->textBrowser_name->setPlainText(" ");
            ui->textBrowser_purpose->setPlainText("");
            ui->textBrowser_implementation->setPlainText("");
            ui->textBrowser_Principle->setPlainText("");
            ui->textBrowser_bodypart->setPlainText("");
            ui->textBrowser_Details->setPlainText("");
            ui->textBrowser_reference->setPlainText("");
            break;
        case 6:
            ui->p5_stackedWidget_bodymaps->setCurrentIndex(6);
            ui->textBrowser_name->setPlainText(" ");
            ui->textBrowser_purpose->setPlainText("");
            ui->textBrowser_implementation->setPlainText("");
            ui->textBrowser_Principle->setPlainText("");
            ui->textBrowser_bodypart->setPlainText("");
            ui->textBrowser_Details->setPlainText("");
            ui->textBrowser_reference->setPlainText("");
            break;
        case 7:
            ui->p5_stackedWidget_bodymaps->setCurrentIndex(7);
            ui->textBrowser_name->setPlainText(" ");
            ui->textBrowser_purpose->setPlainText("");
            ui->textBrowser_implementation->setPlainText("");
            ui->textBrowser_Principle->setPlainText("");
            ui->textBrowser_bodypart->setPlainText("");
            ui->textBrowser_Details->setPlainText("");
            ui->textBrowser_reference->setPlainText("");
        case 8:
            ui->p5_stackedWidget_bodymaps->setCurrentIndex(8);
            ui->textBrowser_name->setPlainText(" ");
            ui->textBrowser_purpose->setPlainText("");
            ui->textBrowser_implementation->setPlainText("");
            ui->textBrowser_Principle->setPlainText("");
            ui->textBrowser_bodypart->setPlainText("");
            ui->textBrowser_Details->setPlainText("");
            ui->textBrowser_reference->setPlainText("");
            break;
        case 9:
            ui->p5_stackedWidget_bodymaps->setCurrentIndex(9);
            ui->textBrowser_name->setPlainText(" ");
            ui->textBrowser_purpose->setPlainText("");
            ui->textBrowser_implementation->setPlainText("");
            ui->textBrowser_Principle->setPlainText("");
            ui->textBrowser_bodypart->setPlainText("");
            ui->textBrowser_Details->setPlainText("");
            ui->textBrowser_reference->setPlainText("");
            break;

    }
}

void p5_bodymap::goback(){
    qDebug() << "回退到首页";
    pagejumper::getInstance().pageJumpSender(target_page);
}

void p5_bodymap::gonext(){
    qDebug() << "go to page 6";
    pagejumper::getInstance().pageJumpSender(target_page_next);
}
