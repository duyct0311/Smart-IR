#include "mainwindow.h"
#include <QApplication>
#include <QWidget>
#include <QDesktopWidget>
#include <QTranslator>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Qt::WindowFlags flags = w.windowFlags();
    flags &= ~Qt::WindowMaximizeButtonHint;
    w.setWindowFlags(flags);
    w.setWindowTitle("VNPT Smart IR 2023");
    w.show();
    return a.exec();
}
