#ifndef QDWINDOW_H
#define QDWINDOW_H

#include <QWidget>

class QDWindow : public QWidget
{
    Q_OBJECT

public:
    QDWindow(QWidget *parent = nullptr);
    ~QDWindow();
protected:
    void paintEvent(QPaintEvent *event) override;

};
#endif // QDWINDOW_H
