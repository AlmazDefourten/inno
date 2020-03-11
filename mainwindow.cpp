#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "anotherwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

    ui->engine->load(QUrl("https://m.vk.com/innopolis"));
    ui->engine->show();
    ui->enginetwo->load(QUrl("http://welcome.innopolis.ru/vacancies/"));
        ui->enginetwo->show();


}


ф
