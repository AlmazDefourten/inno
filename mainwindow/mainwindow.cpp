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

void MainWindow::EngineShow() // функция загрузки содержимого веб-страниц
{

    ui->engine->load(QUrl("https://m.vk.com/innopolis"));
    ui->engine->show();
    ui->enginetwo->load(QUrl("http://welcome.innopolis.ru/vacancies/"));
        ui->enginetwo->show();
}

void MainWindow::on_reloadButton_clicked() // при нажатии на кнопку перезагрузки
{

    EngineShow();
}

void MainWindow::on_univButton_clicked() // кнопка Unviersity нажатие, открытие окна университета
{
    window = new university(this);
    window->show();
    window->unEngineShow();
}

void MainWindow::on_schoolButton_clicked() // кнопка School нажатие, открытие окна школы
{
    scWindow = new school(this);
    scWindow->show();
    scWindow->scEngineShow();
}


void MainWindow::on_evenButton_clicked()
{
    evWindow = new events(this);
    evWindow->show();
    evWindow->evEngineShow();
}

void MainWindow::on_pushButton_2_clicked()
{
    goWindow = new innogo(this);
    goWindow->show();
    goWindow->goEngineShow();
}
