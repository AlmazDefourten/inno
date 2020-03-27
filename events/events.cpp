#include "events.h"
#include "ui_events.h"
#include "mainwindow.h"

events::events(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::events)
{
    ui->setupUi(this);
}

events::~events()
{
    delete ui;
}

void events::on_evReload_clicked()
{
    ui->evEngine->load(QUrl("http://innopolis.ru/media/events/"));      
}


void events::evEngineShow()
{
    ui->evEngine->load(QUrl("http://innopolis.ru/media/events/"));
}

