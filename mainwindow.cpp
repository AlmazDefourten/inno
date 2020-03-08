#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "anotherwindow.h"
#include <QtWebEngine/qtwebengineglobal.h>
#include <QWebEngineView>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    sWindow = new AnotherWindow();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(sWindow, &AnotherWindow::firstWindow, this, &MainWindow::show);

    // Инициализируем третье окно

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    sWindow->show();  // Показываем второе окно
        this->close();    // Закрываем основное окно
    ui->engine->load(QUrl("https://m.vk.com/innopolis"));
    ui->engine->show();
    ui->enginetwo->load(QUrl("http://welcome.innopolis.ru/vacancies/"));
        ui->enginetwo->show();


}


