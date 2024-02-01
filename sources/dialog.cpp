#include "../headers/dialog.h"
#include "ui_dialog.h"

#include "../headers/maindashboard.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->dBtn, &QPushButton::clicked, this, &Dialog::on_pushButton_clicked );
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    this->close();
    mDash = new MainDashboard(this);
    mDash->show();
}

