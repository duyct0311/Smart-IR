#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QTimer>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();





public slots:
    void on_scanButton_clicked();
    void stopScan();
    void cancelStopScan();
    void update();
private:
    Ui::MainWindow *ui;
public:
    QTimer* timer = NULL;
    int i = 0;
    QString data;
private slots:
    void on_scanNavBar_clicked();
    void on_reportNavBar_clicked();
    void on_radioButton_5_clicked();
    void on_radioButton_6_clicked();
    void on_radioButton_7_clicked();
    void on_monitorNavBar_clicked();
    void on_licenseNavBar_clicked();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_19_clicked();
    void on_pushButton_20_clicked();
    void on_policyNavBar_clicked();
    void on_radioButton_8_clicked();
    void on_radioButton_9_clicked();
    void on_radioButton_10_clicked();
    void on_pushButton_22_clicked();
    void on_pushButton_23_clicked();
    void on_pushButton_24_clicked();
    void on_pushButton_25_clicked();
    void on_pushButton_26_clicked();
    void on_pushButton_27_clicked();
    void on_scheduleScan_clicked();
    void on_advancedOptions_clicked();
    void on_pushButton_21_clicked();
};



#endif // MAINWINDOW_H
