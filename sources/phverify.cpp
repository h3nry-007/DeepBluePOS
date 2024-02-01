#include "../headers/phverify.h"
#include "ui_phverify.h"

#include <QMessageBox>
#include <QWidget>

PhVerify::PhVerify(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PhVerify)
{
    ui->setupUi(this);

    //set focus on button, after text fill finished!;r
    connect(ui->codeField, &QLineEdit::returnPressed, [=](){
        ui->verifyBtn->click(), &PhVerify::on_verifyBtn_clicked;
    });

    //connect(ui->verifyBtn, &QPushButton::clicked, this, &PhVerify::on_verifyBtn_clicked);
}

PhVerify::~PhVerify()
{
    delete ui;
}

void PhVerify::on_verifyBtn_clicked(){
    QString code = ui->codeField->text();
    if(code == "1111"){
        QMessageBox::information(this,"Success", "Verification success!");
        this->close();
        mDash = new MainDashboard(this);
        mDash->show();
    }else{

            QMessageBox::warning(this, "Failed", "Verification Failed!");
            ui->codeField->setText("");
    }
}

