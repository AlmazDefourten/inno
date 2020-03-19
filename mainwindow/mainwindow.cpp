#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "school.h"

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

void MainWindow::EngineShow()
{

    ui->engine->load(QUrl("https://m.vk.com/innopolis"));
    ui->engine->show();
    ui->enginetwo->load(QUrl("http://welcome.innopolis.ru/vacancies/"));
        ui->enginetwo->show();
}

void MainWindow::on_reloadButton_clicked()
{

    EngineShow();
}

void MainWindow::on_univButton_clicked()
{
    window = new university(this);
    window->show();
    window->unEngineShow();
}

void MainWindow::on_schoolButton_clicked()
{
    scWindow = new school(this);
    scWindow->show();
    scWindow->scEngineShow();
}

