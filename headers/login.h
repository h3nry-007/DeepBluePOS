#include "../headers/phverify.h"
#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void loginCheck();

private:
    Ui::MainWindow *ui;
    PhVerify phVeri;

};
#endif // LOGIN_H
