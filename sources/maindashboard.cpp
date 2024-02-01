#include "../headers/maindashboard.h"
#include "ui_maindashboard.h"

#include <QProcess>

MainDashboard::MainDashboard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainDashboard)
{
    ui->setupUi(this);

    connect(ui->actionpoweroff, &QAction::triggered, this, &MainDashboard::on_actionpoweroff_triggered);
    connect(ui->actionreboot, &QAction::triggered, this, &MainDashboard::on_actionreboot_triggered);
}

MainDashboard::~MainDashboard()
{
    delete ui;
}

void MainDashboard::on_actionpoweroff_triggered()
{
    QProcess::startDetached("poweroff");
}


void MainDashboard::on_actionreboot_triggered()
{
    QProcess::startDetached("reboot");
}

