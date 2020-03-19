#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <QDialog>

namespace Ui {
class university;
}

class university : public QDialog
{
    Q_OBJECT

public:
    explicit university(QWidget *parent = nullptr);
    void unEngineShow();
    ~university();

private slots:
    void on_unReload_clicked();

private:
    Ui::university *ui;
};

#endif // UNIVERSITY_H
