#include <qpainter.h>
#include <QGraphicsDropShadowEffect>

#include "QDWindow.h"

QDWindow::QDWindow(QWidget *parent)
    : QWidget(parent)
{
    setWindowFlags(Qt::FramelessWindowHint);//设置无边框
    setAttribute(Qt::WA_TranslucentBackground);
    QGraphicsDropShadowEffect *shadowEffect = new QGraphicsDropShadowEffect(this);
    shadowEffect->setBlurRadius(10); // 阴影模糊半径
    shadowEffect->setColor(Qt::black); // 阴影颜色
    shadowEffect->setOffset(0, 0); // 阴影偏移量
    setGraphicsEffect(shadowEffect);
}

void QDWindow::paintEvent(QPaintEvent *event)
{
    QPainter *painter = new QPainter(this);
    painter->setPen(Qt::NoPen);
    painter->setRenderHint(QPainter::Antialiasing); // 抗锯齿
    // 绘制背景面板
    painter->setBrush( Qt::white);
    painter->drawRect(QRectF(10, 10, width() - 20, height() - 20));
    delete painter;
}

QDWindow::~QDWindow()
{
}

