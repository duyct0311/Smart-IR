#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPushButton>
#include <QTimer>
#include <QAbstractButton>
#include "advancedoption.h"
#include "dialog.h"
#include <QTranslator>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statistics->hide();
    ui->label_75->hide();
    ui->label_76->hide();
    ui->label_77->hide();
    ui->label_91->hide();
    ui->label_94->hide();
    ui->label_95->hide();
    ui->label_96->hide();
    ui->label_98->hide();
    ui->label_99->hide();
    ui->label_97->hide();
    ui->label_102->hide();
    ui->label_103->hide();
    ui->label_104->hide();
    ui->label_105->hide();
    ui->label_106->hide();
    ui->label_107->hide();
    ui->label_108->hide();
    ui->label_109->hide();
    ui->label_110->hide();
    m_translator.load("/:translate_es_US.qm");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::changeEvent(QEvent *event)
{
    if (event->type() == QEvent::LanguageChange)
    {
        ui->retranslateUi(this);
    }

    QWidget::changeEvent(event);
}

void MainWindow::on_scanButton_clicked()
{
    QMessageBox msgBox;
    if (ui->scanButton->text() == "Scan")
    {
        if (timer == NULL)
        {
            timer = new QTimer(this);
            connect(timer, &QTimer::timeout, this, &MainWindow::update);
        }
        int interval = 100;
        timer->setInterval(interval);
        timer->start();
        ui->scanButton->setText("Stop");
        ui->statistics->show();
    }
    else
    {
        msgBox.setWindowTitle("VNPT Smart IR 2023");
        msgBox.setText("Do you want to stop scanning?");
        QPushButton *stopButton = msgBox.addButton("Stop",QMessageBox::RejectRole);
        QPushButton *cancelButton = msgBox.addButton("Cancel",QMessageBox::RejectRole);
        msgBox.setDefaultButton(stopButton);
        msgBox.setDefaultButton(cancelButton);
        connect(stopButton, SIGNAL(clicked()), this, SLOT(stopScan()));
        connect(cancelButton, SIGNAL(clicked()), this, SLOT(cancelStopScan()));
        msgBox.show();
        msgBox.exec();
    }
}

void MainWindow::stopScan()
{
    ui->statistics->hide();
    ui->scanButton->setText("Scan");
    ui->progressBar->setText(NULL);
}
void MainWindow::update()
{
    if (i > 100)
    {
        timer->stop();
        i = 0;
        return;
    }
    data = QString::number(i);
    ui->progressBar->setText(data + "%");
    i++;
}

void MainWindow::cancelStopScan()
{

}


void MainWindow::on_scanNavBar_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->label_62->show();
    ui->label_61->show();
    ui->label_72->show();
    ui->label_73->show();
    ui->label_74->show();
    ui->label_75->hide();
    ui->label_76->hide();
    ui->label_77->hide();
    ui->label_91->hide();
    ui->label_94->hide();
    ui->label_95->hide();
    ui->label_96->hide();
    ui->label_98->hide();
    ui->label_99->hide();
    ui->label_97->hide();
    ui->label_102->hide();
    ui->label_103->hide();
    ui->label_104->hide();
    ui->label_105->hide();
    ui->label_106->hide();
    ui->label_107->hide();
    ui->label_108->hide();
    ui->label_109->hide();
    ui->label_110->hide();
}


void MainWindow::on_reportNavBar_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->label_62->hide();
    ui->label_61->hide();
    ui->label_72->hide();
    ui->label_73->hide();
    ui->label_74->hide();
    ui->label_75->show();
    ui->label_76->show();
    ui->label_77->show();
    ui->label_91->show();
    ui->label_94->hide();
    ui->label_95->hide();
    ui->label_96->hide();
    ui->label_98->hide();
    ui->label_99->hide();
    ui->label_97->hide();
    ui->label_102->hide();
    ui->label_103->hide();
    ui->label_104->hide();
    ui->label_105->hide();
    ui->label_106->hide();
    ui->label_107->hide();
    ui->label_108->hide();
    ui->label_109->hide();
    ui->label_110->hide();
}


void MainWindow::on_radioButton_5_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(0);
}


void MainWindow::on_radioButton_6_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(1);
}


void MainWindow::on_radioButton_7_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(2);
}

void MainWindow::on_monitorNavBar_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui->label_62->hide();
    ui->label_61->hide();
    ui->label_72->hide();
    ui->label_73->hide();
    ui->label_74->hide();
    ui->label_75->hide();
    ui->label_76->hide();
    ui->label_77->hide();
    ui->label_91->hide();
    ui->label_94->show();
    ui->label_95->show();
    ui->label_96->show();
    ui->label_98->show();
    ui->label_99->show();
    ui->label_97->hide();
    ui->label_102->hide();
    ui->label_103->hide();
    ui->label_104->hide();
    ui->label_105->hide();
    ui->label_106->hide();
    ui->label_107->hide();
    ui->label_108->hide();
    ui->label_109->hide();
    ui->label_110->hide();

}


void MainWindow::on_licenseNavBar_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    ui->label_62->hide();
    ui->label_61->hide();
    ui->label_72->hide();
    ui->label_73->hide();
    ui->label_74->hide();
    ui->label_75->hide();
    ui->label_76->hide();
    ui->label_77->hide();
    ui->label_91->hide();
    ui->label_94->hide();
    ui->label_95->hide();
    ui->label_96->hide();
    ui->label_98->hide();
    ui->label_99->hide();
    ui->label_97->show();
    ui->label_102->show();
    ui->label_103->show();
    ui->label_104->show();
    ui->label_105->show();
    ui->label_106->hide();
    ui->label_107->hide();
    ui->label_108->hide();
    ui->label_109->hide();
    ui->label_110->hide();
}


void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget_3->setCurrentIndex(1);
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget_3->setCurrentIndex(0);
}


void MainWindow::on_pushButton_19_clicked()
{
    QMessageBox updateBox;
    updateBox.setWindowTitle("VNPT Smart IR 2023");
    updateBox.setText("Update successfully");
    updateBox.show();
    updateBox.exec();
}


void MainWindow::on_pushButton_20_clicked()
{
    QMessageBox updateBox1;
    updateBox1.setWindowTitle("VNPT Smart IR 2023");
    updateBox1.setText("Update successfully");
    updateBox1.show();
    updateBox1.exec();
}


void MainWindow::on_policyNavBar_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->label_62->hide();
    ui->label_61->hide();
    ui->label_72->hide();
    ui->label_73->hide();
    ui->label_74->hide();
    ui->label_75->hide();
    ui->label_76->hide();
    ui->label_77->hide();
    ui->label_91->hide();
    ui->label_94->hide();
    ui->label_95->hide();
    ui->label_96->hide();
    ui->label_98->hide();
    ui->label_99->hide();
    ui->label_97->hide();
    ui->label_102->hide();
    ui->label_103->hide();
    ui->label_104->hide();
    ui->label_105->hide();
    ui->label_106->show();
    ui->label_107->show();
    ui->label_108->show();
    ui->label_109->show();
    ui->label_110->show();
}


void MainWindow::on_radioButton_8_clicked()
{
    ui->stackedWidget_4->setCurrentIndex(0);
}


void MainWindow::on_radioButton_9_clicked()
{
    ui->stackedWidget_4->setCurrentIndex(1);
}


void MainWindow::on_radioButton_10_clicked()
{
    ui->stackedWidget_4->setCurrentIndex(2);
}








void MainWindow::on_pushButton_22_clicked()
{
    ui->label_63->hide();
    ui->label_64->show();
    ui->label_65->setText("On");
    ui->pushButton_22->hide();
    ui->pushButton_23->show();
}


void MainWindow::on_pushButton_23_clicked()
{
    ui->label_63->show();
    ui->label_64->hide();
    ui->label_65->setText("Off");
    ui->pushButton_22->show();
    ui->pushButton_23->hide();
}


void MainWindow::on_pushButton_24_clicked()
{
    ui->label_66->hide();
    ui->label_67->show();
    ui->label_68->setText("On");
    ui->pushButton_24->hide();
    ui->pushButton_25->show();
}


void MainWindow::on_pushButton_25_clicked()
{
    ui->label_66->show();
    ui->label_67->hide();
    ui->label_68->setText("Off");
    ui->pushButton_24->show();
    ui->pushButton_25->hide();
}


void MainWindow::on_pushButton_26_clicked()
{
    ui->label_69->hide();
    ui->label_71->show();
    ui->label_70->setText("On");
    ui->pushButton_26->hide();
    ui->pushButton_27->show();
}


void MainWindow::on_pushButton_27_clicked()
{
    ui->label_69->show();
    ui->label_71->hide();
    ui->label_70->setText("Off");
    ui->pushButton_26->show();
    ui->pushButton_27->hide();
}





void MainWindow::on_scheduleScan_clicked()
{
    Dialog* d = new Dialog();
    d->show();
    d->setWindowTitle("Scheduler scan");
}


void MainWindow::on_advancedOptions_clicked()
{
    advancedOption* ad = new advancedOption();
    ad->show();
    ad->setWindowTitle("Advanced options");
}



void MainWindow::on_vieTrans_clicked()
{
    ui->label_100->hide();
    ui->label_84->show();
    ui->engTrans->show();
    ui->vieTrans->hide();
    m_translator.load(":/translate_vi_VN.qm");
    m_App->installTranslator(&m_translator);
}


void MainWindow::on_engTrans_clicked()
{
    ui->label_100->show();
    ui->label_84->hide();
    ui->engTrans->hide();
    ui->vieTrans->show();
    m_translator.load(":/translate_es_US.qm");
    m_App->installTranslator(&m_translator);
}


