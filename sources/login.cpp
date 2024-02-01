#include "../headers/login.h"
#include "../headers/phverify.h"
#include "ui_login.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // focus on another field, clicked enter key form keyboard
    connect(ui->phoneField, &QLineEdit::returnPressed, [=](){ui->pwdField->setFocus();});

    // change focus on button and work button's click method if user enter;
    connect(ui->pwdField, &QLineEdit::returnPressed, [=](){
        ui->continueBtn->click(), &MainWindow::loginCheck;
    });

    connect(ui->continueBtn, &QPushButton::clicked, this, &MainWindow::loginCheck);


}

MainWindow::~MainWindow()
{
    delete ui;
}

//login condition
void MainWindow::loginCheck(){
    QString phone = ui->phoneField->text();
    QString password = ui->pwdField->text();

    if (phone == "956400867" && password == "admin"){
        QMessageBox::information(this,"Login Success", "Welcome to Admin Panel");
        this->close();
        //phVeri = new PhVerify(this);
        phVeri.show();

    }else{
        QMessageBox::warning(this, "Login Failed", "Username or Password is incorrect!");
        ui->phoneField->setText("");
        ui->pwdField->setText("");
    }
}

