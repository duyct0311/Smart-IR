#include "mainwindow.h"
#include <QApplication>
#include <QWidget>
#include <QFontDatabase>
#include <QTranslator>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("VNPT Smart IR 2023");
    w.show();
    return a.exec();
}
