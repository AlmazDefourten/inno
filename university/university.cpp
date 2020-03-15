#include "university.h"
#include "ui_university.h"
#include "mainwindow.h"


university::university(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::university)
{
    ui->setupUi(this);
}

university::~university()
{
    delete ui;
}

void university::on_pushButton_clicked()
{
    ui->unEngine->load(QUrl("https://apply.innopolis.ru/university/general-information/"));

}
void university::unEngineShow()
{

    ui->unEngine->load(QUrl("https://apply.innopolis.ru/university/general-information/"));
}
