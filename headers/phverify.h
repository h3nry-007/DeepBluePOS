#include "../headers/maindashboard.h"
#ifndef PHVERIFY_H
#define PHVERIFY_H

#include <QWidget>

namespace Ui {
class PhVerify;
}

class PhVerify : public QWidget
{
    Q_OBJECT

public:
    explicit PhVerify(QWidget *parent = nullptr);
    ~PhVerify();

private slots:
    void on_verifyBtn_clicked();

private:
    Ui::PhVerify *ui;
    MainDashboard *mDash;

};

#endif // PHVERIFY_H
