#ifndef EVENTS_H
#define EVENTS_H

#include <QDialog>

namespace Ui {
class events;
}

class events : public QDialog
{
    Q_OBJECT

public:
    explicit events(QWidget *parent = nullptr);
    ~events();
    void evEngineShow(); // загрузка содержимого вебвиджета

private slots:
    void on_pushButton_clicked();

private:
    Ui::events *ui;
};

#endif // EVENTS_H
