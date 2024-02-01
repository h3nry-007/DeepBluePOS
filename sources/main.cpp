#include "../headers/login.h"
#include "../headers/phverify.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    // PhVerify p;
    // p.show();

    return a.exec();
}
