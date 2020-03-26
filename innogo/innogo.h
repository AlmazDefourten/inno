#ifndef INNOGO_H
#define INNOGO_H

#include <QDialog>

namespace Ui {
class innogo;
}

class innogo : public QDialog
{
    Q_OBJECT

public:
    explicit innogo(QWidget *parent = nullptr);
    void goEngineShow();
    ~innogo();

private:
    Ui::innogo *ui;
};

#endif // INNOGO_H
