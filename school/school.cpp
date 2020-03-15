#include "school.h"
#include "ui_school.h"
#include "mainwindow.h"

school::school(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::school)
{
    ui->setupUi(this);
}

school::~school()
{
    delete ui;
}

void school::on_pushButton_clicked()
{
    ui->scEngine->load(QUrl("http://www.innopolis-school.ru/"));
}

void school::scEngineShow()
{
    ui->scEngine->load(QUrl("http://www.innopolis-school.ru/"));
}
