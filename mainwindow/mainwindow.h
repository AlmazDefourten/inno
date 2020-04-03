#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "university.h"
#include "events.h"
#include "innogo.h"
#include "settings.h"
#include <QMainWindow>
#include "school.h"
#include <QtWebEngine/qtwebengineglobal.h>
#include <QWebEngineView>
#include <QWidget>
#include "QSettings"
#include "QMessageBox"
#define ORGANIZATION_NAME "inno"
#define ORGANIZATION_DOMAIN "innopolis.ru"
#define APPLICATION_NAME "innogo"
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
    void on_evenButton_clicked();
    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::MainWindow *ui;

    university *window;     // окно университета
    school *scWindow;       // окно школы
    events *evWindow;       // окно событий
    innogo *goWindow;       // окно работы
    Settings *seWindow;
};
#endif // MAINWINDOW_H
