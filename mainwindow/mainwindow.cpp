#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "school.h"
#include "QDebug"

QString home;
QString job = "Технопарк";
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

void MainWindow::EngineShow()                                   // функция загрузки содержимого веб-страниц
{

    ui->engine->load(QUrl("https://m.vk.com/innopolis"));                // загрузка страницы группы ВК в виджет
    ui->engine->show();                                                  // показ страницы
    ui->enginetwo->load(QUrl("http://welcome.innopolis.ru/vacancies/")); // загрузка страницы работы
        ui->enginetwo->show();                                           // показ страницы работы
}

void MainWindow::on_reloadButton_clicked()                      // при нажатии на кнопку перезагрузки
{

    EngineShow();
}

void MainWindow::on_univButton_clicked()                        // кнопка Unviersity нажатие, открытие окна университета
{
    window = new university(this);              // объявление объекта window с типом university
    window->show();                             // показ объекта
    window->unEngineShow();                     // прогрузка Web содержимого
}

void MainWindow::on_schoolButton_clicked()                      // кнопка School нажатие, открытие окна школы
{
    scWindow = new school(this);                // объявление объекта scWindow с типом school
    scWindow->show();                           // показ объекта
    scWindow->scEngineShow();                   // прогрузка Web содержимого
}


void MainWindow::on_evenButton_clicked()                        // кнопка Events нажатие, открытие окна событий
{
    evWindow = new events(this);                // объявление объекта evWindow с типом events
    evWindow->show();                           // показ объекта
    evWindow->evEngineShow();                   // прогрузка Web содержимого
}

void MainWindow::on_pushButton_2_clicked()                      // кнопка InnoGo нажатие, открытие окна такси
{
    goWindow = new innogo(this);                // объявление объекта goWindow с типом innogo
    goWindow->show();                           // показ объекта
    goWindow->goEngineShow();                   // прогрузка Web содержимого
}

void MainWindow::on_pushButton_6_clicked()
{
    if (home == 0)
    {
        seWindow = new Settings(this);
        seWindow->show();
    }
}
