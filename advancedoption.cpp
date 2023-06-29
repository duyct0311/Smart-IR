#include "advancedoption.h"
#include "ui_advancedoption.h"

advancedOption::advancedOption(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::advancedOption)
{
    ui->setupUi(this);
    ui->label_6->hide();
    ui->pushButton_4->hide();
}

advancedOption::~advancedOption()
{
    delete ui;
}

void advancedOption::on_pushButton_5_clicked()
{
    ui->label_6->show();
    ui->label_4->hide();
    ui->label_5->setText("On");
    ui->pushButton_5->hide();
    ui->pushButton_4->show();
}


void advancedOption::on_pushButton_4_clicked()
{
    ui->label_6->hide();
    ui->label_4->show();
    ui->label_5->setText("Off");
    ui->pushButton_5->show();
    ui->pushButton_4->hide();
}

