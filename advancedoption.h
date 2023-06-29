#ifndef ADVANCEDOPTION_H
#define ADVANCEDOPTION_H

#include <QMainWindow>

namespace Ui {
class advancedOption;
}

class advancedOption : public QMainWindow
{
    Q_OBJECT

public:
    explicit advancedOption(QWidget *parent = nullptr);
    ~advancedOption();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::advancedOption *ui;
};

#endif // ADVANCEDOPTION_H
