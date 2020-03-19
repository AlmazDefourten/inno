#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "university.h"
#include <QMainWindow>
#include "school.h"
#include <QtWebEngine/qtwebengineglobal.h>
#include <QWebEngineView>
#include <QWidget>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void EngineShow();
    void scEngineShow();


private slots:
    void on_reloadButton_clicked();
    void on_univButton_clicked();
    void on_schoolButton_clicked();



private:
    Ui::MainWindow *ui;
    university *window;
    school *scWindow;

};
#endif // MAINWINDOW_H
