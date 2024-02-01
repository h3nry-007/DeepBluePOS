#ifndef MAINDASHBOARD_H
#define MAINDASHBOARD_H

#include <QMainWindow>

namespace Ui {
class MainDashboard;
}

class MainDashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainDashboard(QWidget *parent = nullptr);
    ~MainDashboard();

private slots:
    void on_actionpoweroff_triggered();

    void on_actionreboot_triggered();

private:
    Ui::MainDashboard *ui;
};

#endif // MAINDASHBOARD_H
