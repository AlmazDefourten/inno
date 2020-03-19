#ifndef SCHOOL_H
#define SCHOOL_H

#include <QDialog>

namespace Ui {
class school;
}

class school : public QDialog
{
    Q_OBJECT

public:
    explicit school(QWidget *parent = nullptr);
    void scEngineShow();
    ~school();

private slots:
    void on_pushButton_clicked();

private:
    Ui::school *ui;

};

#endif // SCHOOL_H
